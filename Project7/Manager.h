#include "Student.h"

class Manager {
public:
	const int MAX_MARK = 10;
	const int MIN_MARK = 4;

	Student findBestStudent(Student* student, int size) {
		for (int i = 0; i < size; i++)
		{
			if (students[i].mark == MAX_MARK) {
				return students[i];
			}
		}

		return Student();
			
	}

	Student findWorstStudent(Student* student, int size) {
		for (int i = 0; i < size; i++)
		{
			if (students[i].mark == MIN_MARK) {
				return students[i];
			}
		}

		return Student();

	}
	}

	double calculateAverageMark(Student* student, int size) {
		double avg = 0;

		for (int i = 0; i < size; i++)
		{
			avg += students[i].mark;
		}

		return avg / size;
	}
};