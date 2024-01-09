#include <iostream>
#include "linker.h"
using namespace std;


void unaryAdd(double round) {
	if (round == NULL) {
		double num;
		cout << "Negative Number to convert to positive or vice versa: ";
		cin >> num;
		num = -num;
		cout << "Result: " << num;
		exitchoice(num);
	}
	if (round != NULL) {
		double result = -round;
		cout << "Result: " << result;
		exitchoice(result);
	}
}