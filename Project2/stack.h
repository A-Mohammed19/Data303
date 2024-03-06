#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Stack {
private:
	std::vector<int> values;

public:
	// Constructor
	Stack();

	// Destructor
	~Stack();

	// Member Functions
	void push(int val);
	void pop();
	int& top();
	bool empty();
	double avg();
	void print();
};
