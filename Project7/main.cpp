#include "Student.h"
#include "Manager.h"
#include "initializer.h"

int main () {
	int size;

	cout << "Input size of students: ";
	cin >> size;

	Student* students = new Student[size];

	Initi inecalaizer;

	for (int i = 0; i < size; i++)
	{
		cout << students[i].toString() << endl;

	}

	Manager manager;

	Student bestStudent = manager.findBestStudent(students, size);
	Student worstStudent = manager.findWorstStudent(students, size);
	double average = manager.calculateAverageMark(students, size);

	cout << "Best student: " << bestStudent.toString() << endl;
	cout << "Best student: " << worstStudent.toString() << endl;
	cout << "Student' average mark is " << average << endl;



	delete[] students;

	return 0;
}