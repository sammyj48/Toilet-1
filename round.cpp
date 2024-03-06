#include <iostream>
#include <cmath>
#include "linker.h"
using namespace std;


void roundMode(double round2) {
	if (CALC_IN_PROGRESS == false) {
		double num;
		cout << "Number to round: ";
		cin >> num;
		double sum = round(num);
		cout << "Result: " << sum;
		exitchoice(sum);
	}
	else if (CALC_IN_PROGRESS == true) {
		double sum;
		sum = round(round2);
		cout << "Result: " << sum;
		exitchoice(sum);
	}
}