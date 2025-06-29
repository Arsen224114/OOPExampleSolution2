#include "Worker.h"

Worker::Worker() : Worker("", "", 0, '\0', false, 0) {
	cout << "Constructor of class worker"<< endl;
}

Worker::Worker(string firstname, string surname, int age,
	char gender, bool alive, double salary) : Human(firstname, surname, age, alive, gender) {
	//cout << "canonical constructor" << endl;
	salary(salary) { }
	
}
Worker::~Worker() {
	//...
}

double Worker::getSalary() {
	return salary;
}

void Worker::setSalary(double salary) {
	if (salary > 0) {
		this->salary = salary;
	}
}

string Worker::toString() {
	//string s = Human::toString();
	//s += ", salary = " + to_string(salary);
	//return s;
	return "Worker";
}