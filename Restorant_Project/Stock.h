#pragma once
#include<iostream>
#include<string>
#include<vector>
using namespace std;
static int id = 0;
class Food {
	int food_id = id;
	string food_name;
	double food_count;
	double foodPrice;
public:
	Food() = default;
	Food(const string& food_name, const double& food_count, const double&foodPrice) {
		++id;
		setFoodName(food_name);
		setFoodCount(food_count);
		setFoodPrice(foodPrice);
	}
	int getFoodId()const {
		if(food_id >= 0)
		return food_id;
	}
	string getFoodName() const{
		return food_name;
	}
	double getFoodCount() const{
		return food_count;
	}
	double getFoodPrice()const{
		return foodPrice;
	}
	void setFoodName(const string& name) {
		this->food_name = food_name;
	}
	void setFoodCount(const double& food_count) {
		this->food_count = food_count;
	}
	void setFoodPrice(const double& foodPrice) {
		this->foodPrice = foodPrice;
	}
	void showFood() {
		cout << "==============Food Info==============" << endl;
		cout << "Food Id : " << getFoodId() << endl;
		cout << "Food Name : " << getFoodName() << endl;
		cout << "Food Count : " << getFoodCount() << endl;
		cout << "Food Price : " << getFoodPrice() << " AZN" << endl;
	}
};

class Stock {
	vector<Food> foods;
public:
	void AddFood(const Food& food) {
		foods.push_back(food);
	}
	void DeletById(const int& food_id) {
		foods.erase(foods.begin() + food_id);
	}
	void UpdateFoodCount(const Food& food,const int& food_id,const double& food_count) {
		foods.at(food_id).setFoodCount(food_count);
	}
	void showAllFood() {
		for (auto food : foods)
		{
			food.showFood();
		}
	}
};