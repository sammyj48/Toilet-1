#include <iostream>
#include "linker.h"
using namespace std;



void sub(double round) {
	if (CALC_IN_PROGRESS == false) {
		double num1;
		double num2;
		cout << "Base number: ";
		cin >> num1;
		cout << "\nNumber to subtract: ";
		cin >> num2;
		double sum = num1 - num2;
		cout << "Result: " << sum;
		exitchoice(sum);
	}
	if (CALC_IN_PROGRESS == true) {

		double num1;
		cout << "Number to subtract: ";
		cin >> num1;
		double sum = round - num1;
		cout << "\n\nResult: " << sum;
		exitchoice(sum);
	}
}
