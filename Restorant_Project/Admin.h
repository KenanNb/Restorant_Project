#pragma once
#include<iostream>
#include<string>
#include"Stock.h"
#include"Kitchen.h"
using namespace std;

class Admin {
	int admin_id = id;
	string fullname;
	string password;
	string getPassword()const {
		return password;
	}
public:
	Admin() = default;
	Admin(const string& fullname, const string& password) {
		++id;
		setFulname(fullname);
		setPassword(password);
	}
	int getId()const {
		return admin_id;
	}
	string getFullname()const {
		return fullname;
	}
	void setFulname(const string& fullname) {
		if (!fullname.empty())
			this->fullname = fullname;
	}
	void setPassword(const string& password) {
		if (!password.empty())
			this->password = password;
	}
	void show()const {
		cout << "Username : " << getFullname() << endl;
		string stars(password.size(), '*');
		cout << "Password : " << stars << endl;
	}
	
};