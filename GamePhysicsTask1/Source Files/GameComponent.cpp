#include "GameComponent.h"

void GameComponent::update(const tm* eventTime) { //implement the console out update of time events
	cout << "updated at: " << put_time(eventTime, "%X") << " for ID : " << id << endl;
};