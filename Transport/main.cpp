#include <iostream>
#include "GasStation.h"
using namespace std;

int main() {
	int sizeOfCars = 5;
	Car* cars = new Car[sizeOfCars]{ Car(40), Car(50), Car(45), Car(20) };

	int sizeOfTrucks = 2;
	Truck* trucks = new Truck[sizeOfTrucks]{ Truck(500), Truck(300) };

	GasStation station;

	cout << "Sum of gas: " << station.calculateTotalGas()
}