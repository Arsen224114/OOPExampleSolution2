#pragma once
#include <iostream>
#include <string>
using namespace std;

class Dragon {
private:
	int age;
	int heads;
	int eyes;

	int calculateHeads() {
		if (age < 200) {
			return 3 + age * 3;
		}
		else if (age < 300) {
			return 3 + (199 * 3) + (age - 199) * 2;
		}
		else {
			return 3 + (199 * 3) + (100 * 2) + (age - 299);
		}
	}

public:
	Dragon(int age) {
		this->age = age;
		this->heads = calculateHeads();
		this->eyes = heads * 2;
	}

};
