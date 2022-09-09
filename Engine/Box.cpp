#include "Box.h"




void Box::Update()
{
	assert(inicialized == true);
	x = x + vp;
	y = y + vo;

	if (x >= Graphics::ScreenWidth - 5)
	{
		x = Graphics::ScreenWidth - 6;
		vp = -vp;
	}
	if (x <= 5)
	{
		x = 6;
		vp = -vp;
	}
	if (y >= Graphics::ScreenHeight - 5)
	{
		y = Graphics::ScreenHeight - 6;
		vo = -vo;
	}
	if (y <= 5)
	{
		y = 6;
		vo = -vo;
	}
}

void Box::Draw(Graphics& gfx)
{
	assert(inicialized == true);
	gfx.PutPixel(x,     y, 255,0,0 );
	gfx.PutPixel(x + 4, y + 4, 255,0,0);
	gfx.PutPixel(x + 4, y + 3, 255,0,0);
	gfx.PutPixel(x + 3, y + 4, 255,0,0);
	gfx.PutPixel(x - 4, y - 4, 255,0,0);
	gfx.PutPixel(x - 4, y - 3, 255,0,0);
	gfx.PutPixel(x - 3, y - 4, 255,0,0);
	gfx.PutPixel(x + 4, y - 4, 255,0,0);
	gfx.PutPixel(x + 4, y - 3, 255,0,0);
	gfx.PutPixel(x + 3, y - 4, 255,0,0);
	gfx.PutPixel(x - 4, y + 4, 255,0,0);
	gfx.PutPixel(x - 4, y + 3, 255,0,0);
	gfx.PutPixel(x - 3, y + 4, 255,0,0);
}

bool Box::Collisions(const Cross& Cr, MainWindow& wnd)
{
	if (attack == false)
	{
		return (((x - Cr.X() < 6) && (x - Cr.X() > -6)) && ((y - Cr.Y() < 6) && (y - Cr.Y() > -6)));
	}
}

void Box::Generate()
{
	while (inicialized == false)
	{
		assert(inicialized == false);
		std::random_device rd;
		std::mt19937 rng(rd());
		std::uniform_int_distribution<int> Disx(0, 750);
		std::uniform_int_distribution<int> Disy(0, 550);
		std::uniform_int_distribution<int> vx(-4, 4);
		std::uniform_int_distribution<int> vy(-4, 4);
		x = Disx(rng);
		y = Disy(rng);
		vp = vx(rng);
		vo = vy(rng);
		if ((vp != 0) && (vo != 0))
		{
			inicialized = true;
		}
	}
}

int Box::X() const
{
	return x ;
}

int Box::Y() const
{
	return y;
}

bool Box::check()
{
	return attack;
}

void Box::set()
{
	attack = true;
}

void Box::reset()
{
	attack = false;
	inicialized = false;
}




