#pragma once
#include "Graphics.h"
#include "Dude.h"
#include "Colors.h"

class Goal {
public:
	Goal(int x, int y);
	void Init(int x, int y);
	void Draw(Graphics& gfx);
	void ProcessConsumption(const Dude &dude);
	bool IsEaten() const;
	void ColorChange();
	int GetCount() const;

private:
	int count = 0;
	int r = 255, g = 0, b = 0;
	int x;
	int y;
	bool isEaten = false;
	static constexpr int length = 30;
};