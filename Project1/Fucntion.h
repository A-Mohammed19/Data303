#pragma once
#include<iostream>
#include <ostream>
#include <fstream>


using namespace std; 

//Declaring the required functions 
int checkint(int a1[], int numitems, int find);
void modifyval(int a1[], int index, int &number, int&old);
void pushback(int a1[], int&numitems,int num);
void erase(int a1[], int& numitems, int index);
