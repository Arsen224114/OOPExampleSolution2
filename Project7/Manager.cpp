#include "Student.h"
#include "Manager.h"


	const int MAX_MARK = 10;
	const int MIN_MARK = 4;

	Student Manager::findBestStudent(Student* student, int size) {
		for (int i = 0; i < size; i++)
		{
			if (students[i].getMark == MAX_MARK) {
				return students[i];
			}
		}

		return Student();

	}

	Student Manager::findWorstStudent(Student* student, int size) {
		for (int i = 0; i < size; i++)
		{
			if (students[i].getMark == MIN_MARK) {
				return students[i];
			}
		}

		return Student();

	}
}

double Manager::calculateAverageMark(Student* student, int size) {
	double avg = 0;

	for (int i = 0; i < size; i++)
	{
		avg += students[i].getMark;
	}

	return avg / size;
}
