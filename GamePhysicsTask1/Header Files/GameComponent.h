#pragma once

#include <iostream>

using namespace std;

class GameComponent {
public:

	GameComponent() { //increment game instances
		id = ++instances;
	};

	~GameComponent() { //desconstructor
		--id;
	}

	void update(const tm* eventTime);
private:
	int id; //id to be created every instance of game
	static int instances; //counts instance total
};