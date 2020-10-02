#ifndef MotionBlur_Pack
#define MotionBlur_Pack

vec3 MotionBlur (in sampler2D image,
                 in vec2 coord
                )
{
    vec3 color = texture(image, coord).rgb;
    return color;
}

#endif