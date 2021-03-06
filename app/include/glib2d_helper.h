#pragma once

#include <glib2d.h>

void G2D_DrawRect(float x, float y, float width, float height, g2dColor color);
void G2D_DrawImage(g2dTexture *tex, float x, float y);
char *G2D_KeyboardGetText(char *desc_msg, char *initial_msg);
