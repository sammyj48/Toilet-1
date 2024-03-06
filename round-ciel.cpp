#include <iostream>
#include "linker.h"
#include <math.h>
using namespace std;

void roundCeil(double round2) {
	if (CALC_IN_PROGRESS == false) {
		double num;
		cout << "Type the number you want to round up: ";
		cin >> num;
		double sum = ceil(num);
		cout << "Result: " << sum;
		exitchoice(sum);
	}
	if (CALC_IN_PROGRESS == true) {
		double sum = ceil(round2);
		cout << "Result: " << sum;
		exitchoice(sum);
	}
}