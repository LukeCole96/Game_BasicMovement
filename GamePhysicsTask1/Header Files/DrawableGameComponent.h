#include <iostream>
#include <string>
#include "GameComponent.h"

using namespace std;
enum Direction : unsigned char {
	xL = 0,
	xR = 1,
	yU = 2,
	yD = 3,
};

class DrawableGameComponent : public GameComponent {
public:
	Direction direction;
	const int FIXED_SCREEN_HEIGHT = 20, FIXED_SCREEN_WIDTH = 80;
	DrawableGameComponent(int xCoord, int yCoord) {
//		int x = xCoord;
//   	int y = yCoord;
		direction = xR;

/*		if (xCoord < 0) {
			int i = xCoord;
			switch (i) {
			case i > 80:
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
