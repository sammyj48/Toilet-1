#include <iostream>
#include "linker.h"
#include "Var.h"
using namespace std;


void divide(double round) {
	if (CALC_IN_PROGRESS == false) {
		double num1;
		double num2;
		cout << "Base number: ";
		cin >> num1;
		cout << "Number to divide by: ";
		cin >> num2;
		double sum = num1 / num2; cout << "Result: " << sum;
		exitchoice(sum);

	}
	else if (CALC_IN_PROGRESS == true) {
		double num1;
		cout << "Number to divide by: ";
		cin >> num1;
		double sum = round / num1;
		cout << "Result: " << sum;
		exitchoice(sum);
	}
}