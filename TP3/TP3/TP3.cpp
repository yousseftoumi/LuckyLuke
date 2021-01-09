// TP3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Cowboy.h"
#include "Dame.h"
int main()
{
	Cowboy lucky("Lucky Luke");
	Dame jenny("Jenny");
	// 1. La rencontre ...
	lucky.sePresente();
	jenny.sePresente();
	jenny.changeDeRobe("verte");
	lucky.boit();
	jenny.boit();
	return 0;
}
