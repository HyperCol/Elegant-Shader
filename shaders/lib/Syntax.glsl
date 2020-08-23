#define Tex(tex, uv) texture(tex, uv)
#define TexLod(tex, uv, arg) textureLod(tex, uv, arg)
#define FragData[arg] gl_FragData[arg]
#define FragColor gl_FragColor

#define pow2(data) (data * data)
#define pow3(data) (pow2(data) * data)
#define pow4(data) (pow2(data) * pow2(data))