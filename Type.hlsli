//ƒ‚ƒfƒ‹•`‰æ—p
struct BasicType
{
    float4 svpos : SV_POSITION;
    float4 pos : POSITION;
    float4 normal : NORMAL;
    float2 uv : TEXCOORD;
    float weight : WEIGHT;
    float boneno : BONENO;
};

//ƒyƒ‰ƒ|ƒŠƒSƒ“•`‰æ—p
struct PeraType
{
    float4 pos : SV_POSITION;
    float2 uv : TEXCOORD;
};