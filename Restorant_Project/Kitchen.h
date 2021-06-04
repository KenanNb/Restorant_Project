#pragma once
#include<iostream>
#include<vector>
#include"Stock.h"
using namespace std;

class Meal {
	int meal_id = id;
	string mealName;
	int mealCount = 0;
	double cost;
public:
	Meal() = default;
	Meal(const string& mealname, const int& mealCount, const double& cost) {
		++id;
		setMealName(mealName);
		setMealCount(mealCount);
		setCost(cost);
	}
	int getMeal_id()const {
		return meal_id;
	}
	string getMealName()const {
		return mealName;
	}
	int getMealCount()const {
		return mealCount;
	}
	double getCost()const {
		return  cost;
	}
	void setMealName(const string& mealName) {
		this->mealName = mealName;
	}
	void setMealCount(const int& mealCount) {
		this->mealCount = mealCount;
	}
	void setCost(const double& cost) {
		this->cost = cost;
	}
	void PrintMeal() {
		cout << "=================Meal Info================" << endl;
		cout << "Id : " << getMeal_id() << endl;
		cout << "Meal name : " << getMealName() << endl;
		cout << "Meal order count : " << getMealCount() << endl;
		cout << "Meal's cost : " << getCost() << endl;

	}
};


class Kitchen:public Meal {
	vector<Meal>meals;

public:
	Kitchen() = default;
	Kitchen(const string& mealname, const int& mealCount, const double& cost):Meal(mealname,mealCount,cost){}
	
	void addMeal(const Meal& meal) {
		meals.push_back(meal);
	}
	void DeletMealById(const int& meal_id) {
		meals.erase(meals.begin() + meal_id);
	}
	void UpdateMealCount(const Meal& meal, const int& meal_id, const double& mealCount) {
		meals.at(meal_id).setMealCount(mealCount);
	}
	double calculateTotalCost() {

	}
	void listFoods();
	void printFoods();
	void searchFood();
	void showAllFood() {
		for (auto meal : meals)
		{
			meal.PrintMeal();
		}
	}

};

class Order:public Kitchen {
	int order_id = id;
	string customer;
	vector<Kitchen> kitchens;
	int order_counter;
public:
	Order() = default;
	Order(string customer) {
		++id;
		setCustomerName(customer);
	}
	int getOrderId()const {
		return order_id;
	}
	string getCustomerName()const {
		return customer;
	}
	void setCustomerName(const string& customer) {
		this->customer = customer;
	}

	
};

