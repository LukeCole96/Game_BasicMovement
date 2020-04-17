#include "Game.h"
#include "GameComponent.h"
#include "DrawableGameComponent.h"

void Initialise() {
	cout << "Initialising Game" << endl;
};

void Terminate() {
	cout << "Terminating Game" << endl;
};


int main()
{
	Game game(10);
	GameComponent *GAME_COMPONENT;
	DrawableGameComponent *DRAW_GAME_COMPONENT;
	GAME_COMPONENT = new GameComponent();
	DRAW_GAME_COMPONENT = new DrawableGameComponent(0, 0);

	//Initialise
	game.setInitialise(*Initialise);
	game.setTerminate(*Terminate);

	//Add components
	game.add(GAME_COMPONENT);
	game.add(DRAW_GAME_COMPONENT);

	//Run Game
	game.run();

	//destroy game objects//
	// ~GameComponent(); //cant seem to terminate objects
	// ~DrawableGameComponent();
}
