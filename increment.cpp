#include <iostream>
#include "linker.h"
using namespace std;


void increment(double round) {
	if (CALC_IN_PROGRESS == false) {
		double num;
		cout << "Number to increment: ";
		cin >> num;
		num = num + 1;
		cout << "Result: " << num;
		exitchoice(round);
	}
	if (CALC_IN_PROGRESS == true) {
		double num;
		num = round + 1;
		cout << "Result: " << num;
		exitchoice(num);
	}
	
}