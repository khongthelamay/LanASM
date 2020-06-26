#include "pch.h"
#include "Menu.h"

Menu::Menu()
{
}
Student Menu::get_student()const {
	return student;
}
void Menu::enter_student_name() {
	cout << "Please enter student's name:";
	string name;
	cin >> name;
	cout << "Please enter student's schoolarship:";
	string schoolarship;
	cin >> schoolarship;
	student.set_name(name);
	student.set_schoolarship(schoolarship);
}
void Menu::enter_manager_name() {
	string name;
	cout << "Enter manager's name of Student record round:" << endl;
	cin >> name;
	Student_Record *st_record = new Student_Record(name);

	cout << "Enter manager's name of Test Student round:" << endl;
	cin >> name;
	Test_Student *st_test = new Test_Student(name);

	cout << "Enter manager's name of Interview Student round:" << endl;
	cin >> name;
	Interview_Student *st_interview= new Interview_Student(name);

	st_record->set_next(st_test);
	st_test->set_next(st_interview);

	set_result(student,st_record,st_test,st_interview);
}
void Menu::set_result(Student &stu,Student_Record *st_record, Test_Student *st_test, Interview_Student *st_interview) {
	st_record->interview(stu);
}
void Menu::run() {
	main_menu();
}
void Menu::main_menu() {
	int choice = 0;
	while (choice!=3)
	{
		cout << "---------------Main menu----------------" << endl;
		cout << "1. Enter student name." << endl;
		cout << "2. Interview." << endl;
		cout << "3. Exit." << endl;
		cout << "Enter your choice:" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			enter_student_name();
			system("cls");
			break;
		case 2:
			enter_manager_name();
			break;
		case 3:
			break;
		default:
			break;
		}
	}
}
