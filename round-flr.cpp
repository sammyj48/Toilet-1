#include <iostream>
#include "linker.h"
#include <math.h>
using namespace std;


void roundFlr(double round2) {
	if (round2 == NULL) {
		double num;
		cout << "Type the number you want to round down: ";
		cin >> num;
		double sum = floor(num);
		cout << "Result: " << sum;
		exitchoice(sum);

	}
	if (round2 != NULL) {
		double sum = floor(round2);
		cout << "Result: " << sum;
		exitchoice(sum);
	}
}