#include "pch.h"
#include "StudentManager.h"

#include <string>
#include <iostream>
using namespace std;
//StudentManager
StudentManager::StudentManager(){}
StudentManager::StudentManager(const string &name) {
	this->name_manager = name;
}
bool StudentManager::decide()const {
	cout << "That student passed? (yes/no): ";
	string decide;
	cin >> decide;

	return decide=="yes";
}
void StudentManager::set_next(StudentManager *nextround) {
	this->next_round = nextround;
}
void StudentManager::round_fail(Student &student, const string &round_name)const {
	cout << "Student " << student.get_name() << " failed " << round_name << endl;
	cout << " for schoolarship " << student.get_schoolarship() << endl;
}
void StudentManager::set_name(const string &name) {
	this->name_manager = name;
}
string StudentManager::get_name()const {
	return name_manager;
}

//Student_Record

Student_Record::Student_Record(const string &name):StudentManager(name){}
void Student_Record::interview(Student &student) {
	show("review records of student", name_manager,student);
	if (this->decide() == true) {
		student.up_round();
		next_round->interview(student);
	}
	else {
		round_fail(student,"Record round.");
	}
}


//Test_Student
Test_Student::Test_Student(const string &name) :StudentManager(name) {}
void Test_Student::interview(Student &student) {
	show("Handle test Session for student", name_manager, student);
	if (this->decide() == true) {
		student.up_round();
		next_round->interview(student);
	}
	else {
		round_fail(student, "Test_Student.");
	}
}


//Interview_Student
Interview_Student::Interview_Student(const string &name) :StudentManager(name) {}
void Interview_Student::interview(Student &student) {
	show("Ask Question/Answers from Student", name_manager, student);
	if (this->decide()==true)
	{
		cout << "Student: " << student.get_name() << " Passed all rounds " << endl;
		cout<<" for scholarship "<< student.get_schoolarship() << endl;
	}
	else {
		round_fail(student, "Interview_Student.");
	}
}

void StudentManager::show(const string &s1,const string &name_manager,Student &student) {
	cout << "Manager name:" << name_manager << endl;
	cout << s1 << student.get_name();
	cout << " for scholarship " << student.get_schoolarship() << endl;
}
