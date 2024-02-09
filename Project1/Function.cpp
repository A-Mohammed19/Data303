#include "Fucntion.h"

//1st function
int checkint(int a1[], int size, int find){
	for (int i = 0; i < size; i++) {
		if (find == a1[i]) {
			return i;
		}
	}
	return -1;
}

//2nd function
void modifyval(int a1[], int index, int& number, int& old)
{
	try {
		if (index < 0 || index >= sizeof(a1)) {
			throw ("Index out of range");
		}
		else
			old = a1[index];
			a1[index] = number;
			cout << "The old num was " << old << " now that num is " << number << endl;
	}
	catch (...) {
		cout << "The index was out of range!" << endl;
	}
}


//3rd function 
void pushback(int a1[], int& numitems, int num){
	//tried implenmenting the try and catch was getting errors didn't have time to fix 
	/*try {
		if (!isdigit(num)){
			throw ("Index out of range");
		}
		else
			a1[numitems++] = num;
	}
	catch (...) {
		cout << "The number was not a digit" << endl;
	}*/
	a1[numitems++] = num;
}

//4th fucntion 
void erase(int a1[], int& numitems, int index)
{
	for (int i = index; i < numitems; i++) {
		a1[i] = a1[i + 1];
	}
	numitems--;
}




