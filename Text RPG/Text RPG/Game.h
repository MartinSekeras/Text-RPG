#pragma once
#include <iostream>

class Game {
private:
	int choice;
	bool running;

public:
	Game();
	void mainMenu();
	bool playing() const { return this->running; };
	~Game();
};