#include <iostream>
#include "linker.h"
using namespace std;


void decrement(double round) {
	if (CALC_IN_PROGRESS == false) {
		double num;
		cout << "Number to decrement: ";
		cin >> num;
		double sum = num - 1;
		cout << "Result: " << sum;
		exitchoice(sum);
	}
	if (CALC_IN_PROGRESS == true) {
		double num = round - 1;
		cout << "Result: " << num;
		exitchoice(num);
	}
}