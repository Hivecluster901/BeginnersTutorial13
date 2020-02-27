#pragma once
#include "Graphics.h"
#include "Goal.h"

class Meter {
public:
	void Draw(Graphics& Gfx) const;
	void MeterReading(const Goal& goal);
private:
	int x = 10;
	int y = 10;
	static constexpr int height = 30;
	static constexpr int scale = 10;
	int width = 0;

};
