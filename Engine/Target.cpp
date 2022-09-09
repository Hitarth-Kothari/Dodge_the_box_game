#include "Target.h"





bool Target::Collision(const Cross& Cr, MainWindow& wnd)
{
	return (((x - Cr.X() < 6) && (x - Cr.X() > -6)) && ((y - Cr.Y() < 6) && (y - Cr.Y() > -6)));
}

void Target::Generate()
{
	std::random_device rd;
	std::mt19937 rng(rd());
	std::uniform_int_distribution<int> Disx(0, 700);
	std::uniform_int_distribution<int> Disy(0, 500);
	x = Disx(rng);
	y = Disy(rng);	
}

void Target::Draw(Graphics& gfx) const
{
	gfx.DrawRect((x-(l/2)), (y-(b/2)), l, b, 255,255,0);
}


