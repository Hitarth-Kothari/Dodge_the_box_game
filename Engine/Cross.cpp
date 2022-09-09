#include "Cross.h"




void Cross::Borders()
{
	{
	
		if (x + 4 >= Graphics::ScreenWidth)
		{
			x = Graphics::ScreenWidth - 5;
			vx = 0;
		}
		if (x - 5 <= 0)
		{
			x = 6;
			vx = 0;
		}
		if (y >= Graphics::ScreenHeight - 9)
		{
			y = Graphics::ScreenHeight - 10;
			vy = 0;
		}
		if (y <= 9)
		{
			y = 10;
			vy = 0;
		}
		if (vx >= 4)
		{
			vx = 4;
		}
		if (vy >= 4)
		{
			vy = 4;
		}
		if (vx <= -4)
		{
			vx = -4;
		}
		if (vy <= -4)
		{
			vy = -4;
		}

		x = x + vx;
		y = y + vy;
	}
}

void Cross::Draw(Graphics& gfx)
{
	// Cross Hairs
	gfx.PutPixel(x,     y, 255,     z, z);
	gfx.PutPixel(x,     y + 3, 255, z, z);
	gfx.PutPixel(x,     y + 4, 255, z, z);
	gfx.PutPixel(x,     y - 3, 255, z, z);
	gfx.PutPixel(x,     y - 4, 255, z, z);
	gfx.PutPixel(x + 3, y, 255,     z, z);
	gfx.PutPixel(x + 4, y, 255,     z, z);
	gfx.PutPixel(x - 3, y, 255,     z, z);
	gfx.PutPixel(x - 4, y, 255,     z, z);
}

void Cross::MovementofCross(Graphics& gfx,MainWindow& wnd)
{
	// Movement of Cross
	
		if (wnd.kbd.KeyIsPressed(VK_SPACE))
		{
			z = 0;
		}
		else
		{
			z = 255;
		}

		if (wnd.kbd.KeyIsPressed(VK_RIGHT))
		{
			if (inhibitRight)
			{
			}
			else
			{
				vx = vx + 1;
				inhibitRight = true;
			}
		}
		else
		{
			inhibitRight = false;
		}
		if (wnd.kbd.KeyIsPressed(VK_LEFT))
		{
			if (inhibitLeft)
			{
			}
			else
			{
				vx = vx - 1;
				inhibitLeft = true;
			}
		}
		else
		{
			inhibitLeft = false;
		}
		if (wnd.kbd.KeyIsPressed(VK_UP))
		{
			if (inhibitUp)
			{
			}
			else
			{
				vy = vy - 1;
				inhibitUp = true;
			}
		}
		else
		{
			inhibitUp = false;
		}
		if (wnd.kbd.KeyIsPressed(VK_DOWN))
		{
			if (inhibitDown)
			{
			}
			else
			{
				vy = vy + 1;
				inhibitDown = true;
			}
		}
		else
		{
			inhibitDown = false;
		}
	
}

void Cross::Reset()
{
	x = 400;
	y = 300;
	BoxCon = false;
}

void Cross::CrossStop()
{
	vx = 0;
	vy = 0;
}

int Cross::X() const
{
	return x;
}

int Cross::Y() const
{
	return y;
}

int Cross::Vx() const
{
	return vx;
}

int Cross::Vy() const
{
	return vy;
}

