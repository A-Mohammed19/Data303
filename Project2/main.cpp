#include "list.h"
#include "stack.h"
#include <string>
using namespace std;

int main() {
	// The single linked list 
	Single_Linked_List<std::string> l1;
	l1.push_back("Hello");
	l1.push_back("my");
	l1.push_back("name");
	l1.push_back("is");
	l1.push_back("Abdul");

	l1.print();

	l1.pop_back();
	l1.print();

	l1.push_front("UMKC");
	l1.print();

	l1.push_back("Mohammed");
	l1.print();

	l1.insert(1, "Apple");
	l1.print();

	l1.remove(1);
	l1.print();

	cout << "is can be found at index" << l1.find("is") << endl;

	//this is the stack 
	Stack s1; 
	s1.push(10);
	s1.push(20);
	s1.push(30);
	s1.push(40);
	s1.push(100);

	s1.pop(); 
	s1.print(); 

	cout << "Average is " << s1.avg() << endl;
	cout << "Top is " << s1.top() << endl;


	
	return 0;

}