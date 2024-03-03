#include <iostream>
#include "linker.h"
#include "Var.h"
using namespace std;


void divide(double round) {
	if (CALC_IN_PROGRESS == false) {
		double num1;
		double num2;
		cout << "Please enter the dividend: ";
		cin >> num1;
		cout << "Please enter the divisor: ";
		cin >> num2;
		double sum = num1 / num2; cout << "Here is your result!: " << sum;
		exitchoice(sum);

	}
	else if (CALC_IN_PROGRESS == true) {
		double num1;
		cout << "Please enter the dividend: ";
		cin >> num1;
		double sum = round / num1;
		cout << "This is your result!: " << sum;
		exitchoice(sum);
	}
}