#ifndef Syntax_Enabled
#define Syntax_Enabled

//Error tolerance
#define float2 vec2
#define float3 vec3
#define float4 vec4
#define int2 ivec2
#define int3 ivec3
#define int4 ivec4
#define bool2 bvec2
#define bool3 bvec3
#define bool4 bvec4
#define texture2D(sampler, coord)            texture(sampler, coord)
#define texture2DLod(sampler, coord, offset) textureLod(sampler, coord, offset)

//Additional functions
float saturate (in float data)
{
    return clamp(data, 0.0, 1.0);
}

vec2 saturate (in vec2 data)
{
    return clamp(data, vec2(0.0), vec2(1.0));
}

vec3 saturate (in vec3 data)
{
    return clamp(data, vec3(0.0), vec3(1.0));
}

vec4 saturate (in vec4 data)
{
    return clamp(data, vec4(0.0), vec4(1.0));
}

#endif