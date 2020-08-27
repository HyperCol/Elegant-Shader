/*
This shader is based on GLSL!

#define Elegant_GLSL_3
#define Elegant_GLSL_4
#define Elegant_HLSL_3
#define Elegant_HLSL_4

#define HLSL_Extra_Support_For_GLSL
*/


#if defined(Elegant_GLSL_3) || defined(Elegant_GLSL_4)
    #define Elegant_GLSL_Mode
#endif

#if defined(Elegant_HLSL_3) || defined(Elegant_HLSL_4)
    #define Elegant_HLSL_Mode
#endif



#define Process_Killer()



#if defined(Elegant_GLSL_Mode) && defined(Elegant_HLSL_Mode)
    #error You can't run different shading mode at the same time!
    Process_Killer();
#endif

#if !defined(Elegant_GLSL_Mode) && !defined(Elegant_HLSL_Mode)
    #error You must define a shading mode for rendering!
    Process_Killer();
#endif



#if defined(Elegant_GLSL_Mode)
    #ifdef HLSL_Extra_Support_For_GLSL
        #define float2 vec2
        #define float3 vec3
        #define float4 vec4

        #define int2 ivec2
        #define int3 ivec3
        #define int4 ivec4

        #define bool2 bvec2
        #define bool3 bvec3
        #define bool4 bvec4

        #define float2x2 mat2
        #define float3x3 mat3
        #define float4x4 mat4

        #define Texture.Sample(sampler, coord) texture(sampler, coord)


        #define ddx(data) dFdx(data)
        #define ddy(data) dFdy(data)
        #define frac(data) fract(data)
        #define lerp(data0, data1, value) mix(data0, data1, value)
        #define mad(data) fma(data)
    #endif
#endif

#if defined(Elegant_HLSL_Mode)
#define .stzw .xyzw
#define .stz .xyz
#define .st .xy
#endif

//Use bridge to support specific environment
#include "/ElegantLib/Bridge.inc"