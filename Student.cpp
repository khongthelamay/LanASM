#include "pch.h"
#include "Student.h"


Student::Student()
{
	this->name = name;
	this->schoolarship = schoolarship;
	this->round = 0;
}

string Student::get_name()const {
	return name;
}
string Student::get_schoolarship()const{
	return schoolarship;
}
void Student::set_name(const string &name) {
	this->name = name;
}
void Student::set_schoolarship(const string &schoolarship) {
	this->schoolarship = schoolarship;
}
void Student::up_round() {
	round++;
}
int Student::get_round()const {
	return round;
}
void Student::show_infor() {
	
}
