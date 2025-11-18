#include "GameLoop.h"
#include <chrono>
#include <iostream>

using Clock = std::chrono::high_resolution_clock;
using time_point = std::chrono::high_resolution_clock::time_point;

void GameLoop::DoGameLoop() {
	time_point last = Clock::now();

	while (true) {
		time_point current = Clock::now();
		float deltaTime = std::chrono::duration<float>(current - last).count();

		ProcessInputs();
		Updates(deltaTime);
		Renders();

		last = current;
	}
}

void GameLoop::ProcessInputs()
{
	std::cout << "Processed Inputs  ";
}

void GameLoop::Updates(float deltaTime)
{
	std::cout << "Did Updates (dt = " << deltaTime << ")  ";
}

void GameLoop::Renders()
{
	std::cout << "Rendered" << std::endl;
}
