#include "list.h"
#include "stack.h"
#include <iostream>
using namespace std;

int main() {
	// The single linked list
	Single_Linked_List l1;
	l1.push_back(15);
	l1.push_back(20);
	l1.push_back(10);
	l1.push_back(5);
	l1.push_back(40);
	cout << "The original Linked List" << endl;
	l1.print();

	cout<<"Pop Back" << endl;
	l1.pop_back();
	l1.print();

	cout << "Push Front" << endl;
	l1.push_front(30);
	l1.print();

	cout << "Push Back" << endl;
	l1.push_back(20);
	l1.print();

	cout << "Insert" << endl;
	l1.insert(1, 10);
	l1.print();

	cout << "Remove" << endl;
	l1.remove(1);
	l1.print();

	cout << "5 can be found at index " << l1.find(5) << endl;

	// this is the stack
	cout << "\nThe Stack" << endl;
	Stack s1;
	s1.push(10);
	s1.push(20);
	s1.push(30);
	s1.push(40);
	s1.push(100);

	s1.pop();
	s1.print();

	cout << "Average is " << s1.avg() << endl;
	cout << "\nTop is " << s1.top() << endl;

	return 0;
}