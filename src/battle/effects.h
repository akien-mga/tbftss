/*
Copyright (C) 2015-2017 Parallel Realities

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

*/

#include "../common.h"

#define INITIAL_EFFECT_DRAW_CAPACITY	128

extern void blitScaled(SDL_Texture *texture, int x, int y, int w, int h, int center);
extern SDL_Texture *getTexture(char *name);
extern int collision(int x1, int y1, int w1, int h1, int x2, int y2, int w2, int h2);
extern void *resize(void *array, int oldSize, int newSize);
extern int isOnBattleScreen(int x, int y, int w, int h);

extern App app;
extern Battle battle;
extern Entity *self;
