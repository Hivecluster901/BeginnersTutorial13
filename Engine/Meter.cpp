#include "Meter.h"
#include "Colors.h"
void Meter::Draw(Graphics& gfx) const
{
	for (int y = this->y; y < this->y + height; y++)
	{
		for (int x = this->x; x < this->x + width; x++)
		{
			gfx.PutPixel(x, y, Colors::Blue);
		}
	}
}

void Meter::MeterReading(const Goal& goal)
{
	width = width + scale * goal.GetCount();
}
