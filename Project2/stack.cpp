#include"stack.h"

Stack::Stack() {
}

void Stack::push(int val) {
	values.push_back(val);
}
void Stack::pop() {
	values.pop_back();
}
int& Stack::top() {
	return values.back();
}
bool Stack::empty() {
	return values.empty();
}
double Stack::avg() {
	double total = 0;
	for (int i = 0; i < values.size(); i++) {
		total += values[i];
	}

	return total / values.size();
}

void Stack::print() {

}