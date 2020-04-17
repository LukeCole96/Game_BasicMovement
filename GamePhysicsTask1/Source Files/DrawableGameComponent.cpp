#include "DrawableGameComponent.h"

void DrawableGameComponent::update(const tm* time) {
GameComponent::update(time); //update with time
calculatePosition(); //calculates the new position
draw(); //outputs the new direction.
changeDirection(); //applies the change and does some checks on if the rand number is the same as dir
};

void DrawableGameComponent::changeDirection() {
    int dir = 0; //new random dir
    int enumLimit = 3; //restrict to enum choice as seen for the directions.
    dir = (rand() % enumLimit); //random number between 0 and 3 and reassigns:
    Direction newDirection; //Initiate a new direction.
    // verify rand number is same as the current direction
    while (dir == direction) {
    dir = (rand() % enumLimit);
    direction = static_cast<Direction>(dir); //implicitly converts dir to Direction and applies the enum direction if changed.
    }
};

void DrawableGameComponent::draw() {
    cout << currentDirection << "current Direction is : " << "pos X:" << x << "pos Y:" << y << endl; // output direction
};

void DrawableGameComponent::calculatePosition() {
    switch (direction) { //takes a direction and appends movement. Switch statement controls what input and output should be processes, in this case, direction changes.
        case xL:
            x--;
        if (x < 0) {
            x = 0;
            currentDirection = "x-L";
        }
            break;
        case xR:
            x++;
            if (x > FIXED_SCREEN_WIDTH) {
            x = FIXED_SCREEN_WIDTH;
            currentDirection = "x-R";
        }
            break;
        case yU:
            y++;
            if (y > FIXED_SCREEN_HEIGHT) {
            y = FIXED_SCREEN_HEIGHT;
            currentDirection = "y-U";
            }
            break;
        case yD:
            yD;
            if (y < 0) {
            y = 0;
            currentDirection = "y-D";
        }
            break;
        default: //defaults to 0 position.
            x = 0;
            y = 0;
            break;
    }