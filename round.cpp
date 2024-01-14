#include <iostream>
#include <cmath>
#include "linker.h"
using namespace std;


void roundMode(double round2) {
	if (round2 == NULL) {
		double num;
		cout << "Number to round: ";
		cin >> num;
		double sum = round(num);
		cout << "Result: " << sum;
		exitchoice(sum);
	}
	else if (round2 != NULL) {
		double sum;
		sum = round(round2);
		cout << "Result: " << sum;
		exitchoice(sum);
	}
}