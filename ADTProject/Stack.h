#pragma once
#include "main.h"

class Stack
{
private:
	int* numbers;
	int size;
private:
	Stack() : numbers(nullptr), size(0) { }
	~Stack();

	void push(int number);
	int pop();
	int head();
	bool isEmpty();
	void clear();
	int getSize();

	string toString();
};