// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "elephant.h"
#include "preserve.h"

int main()
{
	// static Preserve preserve; // TODO: Dynamic preserve. 

	Elephant elephant(6'000, Direction::kNorth);
	GPS gps(8, 8);
	elephant.tag(gps);
	elephant.findHerd();
	const auto time{ elephant.getElapsedTime() };
	if (Loxodonta.look() != Preserve::Feature::kHerd)
	{
		if (Loxodonta.isHungry())
		{
			Loxodonta.turn();
			Loxodonta.move();
			Loxodonta.eat();
		}
		if (Loxodonta:isThursty())
		{
			Loxodonta.turn();
			Loxodonta.move();
			Loxodonta.drink();
		}
		if (Loxodonta:isSleepy())
		{
			Loxodonta.sleep();
		}
		Loxodonta.listen();
		Loxodonta.look();
		Loxodonta.getHeading();
		Loxodonta.turn();
		Loxodonta.move();
	}
	std::cout << "Herd found in: " << time << std::endl;

	return 0;
}
