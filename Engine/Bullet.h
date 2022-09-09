#include "Graphics.h"
#include"Cross.h"
#include "MainWindow.h"
#include "Box.h"


class bullet
{
public:
	void draw(Graphics& gfx);
	void update();
	void generate(const Cross& Cr);
	void collision(Box& Box);
	bool check();
private:
	int x;
	int y;
	int vx;
	int vy;
	bool inicialized = false;
};