#pragma once
#include <iostream>
#include "GameComponent.h"
#include <chrono>  
#include <thread> 

using namespace std;

class Game {
public:
	Game(int maxComponents);
	void add(GameComponent* gameComponent);
	void run();
	void setInitialise(void(*init)());
	void setTerminate(void(*term)());
private:
	int componentCount = 0;
	GameComponent* components[10];
	void(*initialise)();
	void(*terminate)();
	tm* getTime(); 
};

