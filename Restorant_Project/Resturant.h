#pragma once
#include<iostream>
#include"Stock.h"
using namespace std;

void start() {
	Food fd1("Sasiska", 22, 1);
	Food fd2("Kolbasa", 14, 3);
	Food fd3("Mantar", 32, 2);
	Food fd4("Pomidor", 10, 1);
	Food fd5("Zeytun", 40, 1.5);

	Stock s;

	s.AddFood(fd1);
	s.AddFood(fd2);
	s.AddFood(fd3);
	s.AddFood(fd4);
	s.AddFood(fd5);
	s.showAllFood();

	s.UpdateFoodCount(fd1, 0, 39);
	s.showAllFood();


}