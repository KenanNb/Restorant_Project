#pragma once
#include<iostream>
#include"Kitchen.h"
using namespace std;

class Client :public Kitchen {
	string table_no;
	vector<Kitchen>kitchens;

};