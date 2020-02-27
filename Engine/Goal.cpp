#include "Goal.h"
#include "Graphics.h"

Goal::Goal(int x, int y)
{
	this->x = x;
	this->y = y;
}

void Goal::Init(int x, int y)
{
	this->x = x;
	this->y = y;
	this->isEaten = false;
}

void Goal::Draw(Graphics &gfx)
{
	for (int y = this->y; y < this->y + length ; y++)
	{
		for (int x = this->x; x < this->x + length; x++)
		{
			gfx.PutPixel(x, y, r, g, b);
		}
	}
}

void Goal::ProcessConsumption( const Dude& dude)
{
	const int goal_right = x + length;
	const int goal_bottom = y + length;
	const int dude_right = dude.GetX() + dude.GetWidth();
	const int dude_bottom = dude.GetY() + dude.GetHeight();
		
	if (dude.GetX() <= goal_right && dude.GetY() <= goal_bottom && dude_right >= x  && dude_bottom >= y)
	{
		isEaten = true;
		count++;
	}

}

bool Goal::IsEaten() const
{
	return isEaten;
}

void Goal::ColorChange()
{

}

int Goal::GetCount() const
{
	return count;
}






