#pragma once
#include <iostream>
#include <string>
#include "GameComponent.h"

using namespace std;
enum Direction : unsigned char {
	Left = 0,
	Right = 1,
	Up = 2,
	Down = 3,
};

class DrawableGameComponent : public GameComponent {
public:
	Direction direction;
	const int FIXED_SCREEN_HEIGHT = 20, FIXED_SCREEN_WIDTH = 80;
	DrawableGameComponent(int xCoord, int yCoord) {
//		int x = xCoord;
//   	int y = yCoord;
		direction = Right;

/*		if (xCoord < 0) {
			int i = xCoord;
			switch (i) {
			case y > 80:
				x = 80;
				break;
			case:
				default;
			}
		}
		*/
		if (xCoord < 0) {
			x = 0;
		}
		else if (yCoord > 80) {
			x = 80;
		}
		else {
			x = xCoord;
		}
		if (yCoord < 0) {
			y = 0;
		}
	};

	void update(const tm* eventTime) override;
private:
	void changeDirection(), draw(), calculatePosition();
	int x;
	int y;
	string currentDirection;
};
