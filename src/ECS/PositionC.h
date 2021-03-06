#pragma once
#include "Components.h"
class PositionC : public Component
{
private:
	int xpos;
	int ypos;
public:
	PositionC(int x, int y)
	{
		xpos = x;
		ypos = y;
	}
	int x() { return xpos; }
	int y() { return ypos; }
	void Init() override
	{
		xpos = 0;
		ypos = 0;
	}
	void Update() override
	{
		xpos++;
		ypos++;
	}
	void setPos(int x, int y)
	{
		xpos = x;
		ypos = y;
	}
};