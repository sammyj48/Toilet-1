#include <iostream>
#include "linker.h"
#include <math.h>
using namespace std;

void roundCeil(double round2) {
	if (round2 == NULL) {
		double num;
		cout << "Type the number you want to round up: ";
		cin >> num;
		double sum = ceil(num);
		cout << "Result: " << sum;
		exitchoice(sum);
	}
	if (round2 != NULL) {
		double sum = ceil(round2);
		cout << "Result: " << sum;
		exitchoice(sum);
	}
}