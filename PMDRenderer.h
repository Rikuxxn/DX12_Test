#pragma once
#include<d3d12.h>
#include<wrl.h>
#include<vector>
#include<memory>

using Microsoft::WRL::ComPtr;
class PMDActor;
class Dx12Wrapper;

///PMD•`‰æ‚Ì‚½‚ß‚Ì‹¤’Ê•”•ª‚ğ
///‚±‚±‚É‚Á‚Ä‚¢‚é
///ŒÂ•Ê‚Ì•”•ª‚ÍPMDActor‚É‚½‚¹‚é
class PMDRenderer
{
private:
	bool CreateRootSignature(void);
	bool CreatePipeline(void);
	ComPtr<ID3D12PipelineState> _pls;
	ComPtr<ID3D12RootSignature> _rootSignature;
	std::vector<std::shared_ptr<PMDActor>> _actors;
	std::shared_ptr<Dx12Wrapper> _dx;
public:
	PMDRenderer(std::shared_ptr<Dx12Wrapper> dx);
	~PMDRenderer();

	void Init(void);

	void AddActor(std::shared_ptr<PMDActor> actor);
	void AddActor(const char* filepath);
	ID3D12RootSignature* RootSignature(void);
	ID3D12PipelineState* Pipeline(void);

	void Update(void);
	void BeforeDraw(void);

	void Draw(void);
	void AnimationStart(void);
};

