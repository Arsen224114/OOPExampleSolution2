#include "Student.h"

class Manager {
public:
	const int MAX_MARK = 10;
	const int MIN_MARK = 4;

	Student findBestStudent(Student* student, int size);
	Student findWorstStudent(Student* student, int size);
	double calculateAverageMark(Student* student, int size);
};