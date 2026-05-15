#ifndef GAME_H
#define GAME_H

#include <stdbool.h>

bool LoadGameTextures(void);
bool InitGame();
bool ResumeGameAfterSurfaceLoss(void);
void Render();
void ShutdownGame();
bool ButtonBump(GLuint textureid, float posX, float posY, float width, float height);
bool Button(float posX, float posY, float width, float height);
bool IsClick(float posX, float posY, float width, float height);


#endif // GAME_H