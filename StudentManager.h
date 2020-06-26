#pragma once
#include <string>
#include "Student.h"
using namespace std;
class StudentManager
{
protected:
	string name_manager;
	StudentManager *next_round;
public:
	StudentManager();
	StudentManager(const string &name);
	void set_name(const string &name);
	string get_name()const;
	virtual void interview(Student &student)=0;
	bool decide()const;
	void set_next(StudentManager *nextround);
	void round_fail(Student &student,const string &round_name)const;
	void show(const string &s1, const string &name_manager,Student &student);
};

class Student_Record:public StudentManager
{
public:
	Student_Record(const string &name);
	void interview(Student &student);

};

class Test_Student :public StudentManager
{
public:
	Test_Student(const string &name);
	void interview(Student &student);

private:

};

class Interview_Student :public StudentManager
{
public:
	Interview_Student(const string &name);
	void interview(Student &student);

private:

};



