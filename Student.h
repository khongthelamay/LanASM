#pragma once
#include <string>
#include <iostream>
using namespace std;
class Student
{
private:
	string name;
	string schoolarship;
	int round;
public:
	Student();
	string get_name()const;
	string get_schoolarship()const;
	void set_name(const string &name);
	void set_schoolarship(const string &schoolarship);
	void up_round();
	int get_round()const;
	void show_infor();
};

