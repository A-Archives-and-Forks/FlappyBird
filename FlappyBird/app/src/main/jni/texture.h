#ifndef TEXTURE_H
#define TEXTURE_H

#define M_PI 3.14159265358979323846f

GLuint LoadTexture(const char* assetPath);
GLuint LoadTextureSized(const char* assetPath, unsigned* outWidth, unsigned* outHeight);
void InitTextureQuadBuffers(void);
void ShutdownTextureQuadBuffers(void);
void RenderTexture(GLuint texture, float x, float y, float width, float height);
void RenderTextureUV(GLuint texture, float x, float y, float width, float height,
    float u0, float v0, float u1, float v1);
void RenderTexturePro(GLuint texture, float x, float y, float width, float height, float angle);

void CreateBox(uint32_t color, float posX, float posY, float width, float height);

#endif // TEXTURE_H