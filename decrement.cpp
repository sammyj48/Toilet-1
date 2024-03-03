#include <iostream>
#include "linker.h"
using namespace std;


void decrement(double round) {
	if (CALC_IN_PROGRESS == false) {
		double num;
		cout << "Number to decrement (not excrement!!): ";
		cin >> num;
		double sum = num - 1;
		cout << "And the poopy result is .......: " << sum;
		exitchoice(sum);
	}
	if (CALC_IN_PROGRESS == true) {
		double num = round - 1;
		cout << "And the poopy result is ........: " << num;
		exitchoice(num);
	}
}