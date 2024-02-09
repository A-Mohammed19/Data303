#include "Fucntion.h"
/*Abdul R. Mohammed
Due: 2/8/24
Data Structures 303
*/
int main() {
	//declaring the variables needed
	string filename = "A1input.txt";
	int a1[500];
	int numitems = 0;
	int value;

	//opening and taking input from the file
	ifstream input;
	input.open(filename);
	if (!input) {
		cout << "Can't open file" << endl;
	}

	while (input >> value) {
		a1[numitems++] = value;
	}
	input.close();
	
	//1st function
	cout << "Enter a value to see if its in the array" << endl;
	cin >> value;
	int index = checkint(a1, numitems, value);
	if (index != -1) {
		cout << "The value was found at index " << index << endl;
	}
	else {
		cout << "Invalid Value";
	}

	//2nd function
	cout<< "Enter the index of the number to change it" << endl;
	int index1, newNum, oldNum;
	cin >> index1;
	cout << "Enter new Number" << endl;
	cin >> newNum;
	modifyval(a1, index1, newNum, oldNum);
	//cout << "The old num was " << oldNum << " now that num is " << newNum << endl;
	
	//3rd function 
	cout << "Enter the number to pusback on array" << endl;
	int num;
	cin >> num;
	pushback(a1, numitems, num);
	cout << "New Array:" << endl;
	for (int i = 0; i < numitems; i++) {
		cout << a1[i] << " ";
	}
	
	//4th function 
	cout << "\nEnter the index to remove that number" << endl;
	int index2; 
	cin >> index2;
	erase(a1, numitems, index2);
	cout << "New Array 2.0:" << endl;
	for (int i = 0; i < numitems; i++) {
		cout << a1[i] << " ";
	}

	return 0;
}