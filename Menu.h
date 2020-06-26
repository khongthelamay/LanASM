#pragma once
#include <string>
#include <iostream>

#include "StudentManager.h"
using namespace std;
class Menu
{
private:
	Student student;
public:
	Menu();
	void enter_student_name();
	void enter_manager_name();
	void set_result(Student &stu,Student_Record *st_record, Test_Student *st_test, Interview_Student *st_interview);
	void run();
	void main_menu();
	Student get_student()const;
};

