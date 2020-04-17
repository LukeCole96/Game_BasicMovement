#include "Game.h"

void Game::add(GameComponent* gameComponent) {
	cout << "Adding a new component" << endl;
	components[componentCount] = gameComponent; //add component.
	componentCount++; //increment the component count.
};

void Game::run() {
	for (int i = 0; i < 5; i++) {
		//Iterate through each component to update.
		for (int j = 0; j < componentCount; j++) {
			tm* currentTimeStamp = getTime();
			components[j]->update(currentTimeStamp);
		}
	}
};

void Game::setInitialise(void(*init)()) {
	initialise = *init;
	cout << "Initialise has been set!" << endl;
};

void Game::setTerminate(void(*term)()) {
	terminate = *term;
	cout << "Terminate has been set!" << endl;
};

tm* Game::getTime() {
	//Grabs current time on your system.
	auto currentTime = chrono::system_clock::now();
	tm* timeInLocalFormat = localtime(currentTime);
	return timeInLocalFormat;
};