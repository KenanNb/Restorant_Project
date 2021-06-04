#include<iostream>
#include"Stock.h"
using namespace std;

void main() {
	Food fd1("Sasiska", 22, 1);
	Food fd2("Kolbasa", 14, 3);
	Food fd3("Mantar", 32, 2);

	Stock s;

	s.AddFood(fd1);
	s.AddFood(fd2);
	s.AddFood(fd3);
	s.showAllFood();

	s.UpdateFoodCount(fd1,0,39);
	s.showAllFood();


}