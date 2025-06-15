#include "Dragon.h"

int main() {
	int age;
	cout << "Input age of Dragon: ";
	cin >> age;

	/*string display() const {
		cout << "Age: " << age << "Heads: " << heads
			<< "Eyes: " << eyes << endl;
	}*/

	Dragon dragon(age);
	//cout << dragon.display();

	return 0;
}