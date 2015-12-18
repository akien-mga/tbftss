/*
Copyright (C) 2015 Parallel Realities

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

extern void blitRotated(SDL_Texture *texture, int x, int y, float angle);
extern void doFighter(void);
extern void doCapitalShip(void);
extern void addToGrid(Entity *e);
extern void removeFromGrid(Entity *e);
extern Entity **getAllEntsWithin(int x, int y, int w, int h, Entity *ignore);
extern void doRope(Entity *e);
extern void drawRope(Entity *e);
extern void cutRope(Entity *e);
extern void drawShieldHitEffect(Entity *e);
extern void destroyGrid(void);

extern App app;
extern Battle battle;
extern Dev dev;
extern Entity *self;
extern Entity *player;
