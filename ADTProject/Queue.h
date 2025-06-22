#pragma once
#include "main.h"
class Queue
{
private:
	int* numbers;
	int size;
public:
	Queue() : numbers(nullptr), size(0) { }
	Queue();

	void enqueue(int number);
	int dequeue();
	int head();
	bool isEmpty();
	void clear();
	int getSize();

	string toString();
};

