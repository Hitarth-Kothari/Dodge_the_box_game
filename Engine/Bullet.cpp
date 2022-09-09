#include "Bullet.h"

void bullet::draw(Graphics& gfx)
{
	assert(inicialized == true);
	gfx.PutPixel(x, y, 0, 255, 0);
	gfx.PutPixel(x+1, y, 0, 255, 0);
	gfx.PutPixel(x-1, y, 0, 255, 0);
	gfx.PutPixel(x, y+1, 0, 255, 0);
	gfx.PutPixel(x, y-1, 0, 255, 0);
	gfx.PutPixel(x+1, y+1, 0, 255, 0);
	gfx.PutPixel(x-1, y-1, 0, 255, 0);
	gfx.PutPixel(x+1, y-1, 0, 255, 0);
	gfx.PutPixel(x-1, y+1, 0, 255, 0);
}

void bullet::update()
{
	assert(inicialized == true);
	x = x + vx;
	y = y + vy;
}

void bullet::generate(const Cross& Cr)
{
	if (inicialized == false)
	{
		if (Cr.Vx() != 0 || Cr.Vy() != 0)
		{
			inicialized = true;
			vx = Cr.Vx();
			vy = Cr.Vy();
			x = Cr.X();
			y = Cr.Y();
		}
	}
}

void bullet::collision(Box& Box)
{
	if (x >= Graphics::ScreenWidth - 5)
	{
		inicialized = false;
	}
	if (x <= 5)
	{
		inicialized = false;
	}
	if (y >= Graphics::ScreenHeight - 5)
	{
		inicialized = false;
	}
	if (y <= 5)
	{
		inicialized = false;
	}
	if ((((x - Box.X() < 6) && (x - Box.X() > -6)) && ((y - Box.Y() < 6) && (y - Box.Y() > -6))))
	{
		Box.set();
	}
}

bool bullet::check()
{
	return inicialized;
}
