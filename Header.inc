#if defined(GLSL_2_MODE) || defined(GLSL_3_MODE) || defined(GLSL_3_MODE) || defined(GLSL_4_MODE)
    #define Elegant_GLSL_Mode
#elif defined(HLSL_3_MODE) || defined(HLSL_4_MODE) || defined(GLSL_4_1_MODE)
    #define Elegant_HLSL_Mode
#else
    #error You must define the supported shading language: GLSL_*_MODE or HLSL_*_MODE
    #define Process_Interrupt
#endif

#ifdef GLSL_2_MODE
    #error This version of GLSL is not supported at the moument, please use this shader with a newer version of GLSL!
    #define Process_Interrupt
#endif

#if defined(HLSL_3_MODE) || defined(HLSL_4_MODE) || defined(GLSL_4_1_MODE)
    #error HLSL supportance is still in progress, use this shader in GLSL instead!
    #define Process_Interrupt
#endif

#ifndef Process_Interrupt


/*
#ifdef Elegant_GLSL_Mode
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

#ifdef GLSL_2_MODE
    #define in varying
    #define out varying
#endif
#endif



#endif
*/