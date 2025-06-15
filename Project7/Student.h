#pragma once
#include "main.h"

class Student {
private:
	string firstname;
	string surname;
	int age;
	int _class;
	double mark;
	char gender;
	bool alive;
	int size;
	string* subjects;

public:
	//defualt_constructor
	Student() : Student("no name", "no surname");
	Student(string firstname, string surname) : firstname(firstname),
		surname(surname), age(0), _class(0), gender('m'), alive(false),
		mark(0), size(0), subjects(nullptr) {
		//cout << "defualt with arguments" << endl;

	}

	Student(string firstname, string surname, int age) : Student(firstname,
		surname, age, 0, 'm', true, 4) {
		//cout << "defualt with arguments" << endl;

	}

	// copy-constructor
	Student(const Student& student) : Student(student.firstname,
		student.surname, student.age, student._class, student.gender,
		student.alive, student.mark, student.size, student.subjects) {
	}


	~Student();
	string getFirstName();
	void setFirstName(string firstname);
	void setFirstName(string firstname);
	string getSurname(string surname);
	void setSurname(string surname);
	void setSutname(string surname);
	int getAge();
	void setAge(int age);
	int getClass();
	void setClass(int _class);
	bool isAlive();
	void setAlive(bool alive);
	double getMark();
	void setMark(int mark);
	char getGender();
	void setGender(char gender);

	string toString();