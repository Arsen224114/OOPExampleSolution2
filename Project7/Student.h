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
	Student() : Student("no name", "no surname") {
		//cout << "defualt_constructor" << endl;
		
	}

	Student(string firstname, string surname) : firstname(firstname),
		surname(surname), age(0), _class(0), gender('m'), alive(false),
		mark(0), size(0), subjects(nullptr) {
		//cout << "defualt with arguments" << endl;
		
	}

	Student(string firstname, string surname, int age): Student(firstname, 
		surname, age, 0, 'm', true, 4) {
		//cout << "defualt with arguments" << endl;
		
	}

	//canonical constructor
	Student(string firstname, string surname, int age) : Student(firstname, surname, age,
		int _class, char gender, bool alive, double mark) {
		//cout << "canonical constructor" << endl;
		this->firstname = firstname;
		this->surname = surname;
		age = age;
		_class = _class;
		gender = gender;
		alive = alive;
		mark = mark;
	}
		


	// copy-constructor
	Student(const Student& student) : Student(student.firstname,
		student.surname, student.age, student._class, student.gender,
		student.alive, student.mark, student.size, student.subjects) {
		//cout << "canonical constructor" << endl;

	}
	

	~Student() {
		cout << "destructor" << endl;
		if (subjects != nullptr) {
			delete[] subjects;
		}
	}

	string getFirstName() {
		return firstname;
	}

	void setFirstName(string firstname) {
		firstname = firstname;
	}

	void setFirstName(string firstname) {
		this->firstname = firstname;
	}

	string getSurname(string surname) {
		return surname;
	}

	void setSurname(string surname) {
		surname = surname;
	}

	void setSutname(string surname) {
		this->surname = surname;
	}

	int getAge() {
		return age;
	}

	void setAge(int age) {
		if (age > 0) {
			this->age = age;
		}
	}

	int getClass() {
		return _class;
	}

	void setClass(int _class) {
		if (_class >= 1 && _class <= 11) {
			this->_class = _class;
		}
	}

	bool isAlive() {
		return alive;
	}

	void setAlive(bool alive) {
		this->alive = alive;
	}

	double getMark() {
		return mark;
	}

	void setMark(int mark) {
		if (mark >= 0 && mark <= 10) {
			this->mark = mark;
		}
	}


	string toString() {
		string s = firstname;
		s += " " + surname;
		s += ", age = " + to_string(age);
		s += ", class = " + to_string(_class);
		s += ", gender = " + to_string(gender);
		s += ", is alive - ";
		s += (alive ? "yes" : "no");
		s += ", average mark = " + to_string(mark);
		return s;
	}
};