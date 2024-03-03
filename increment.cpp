#include <iostream>
#include "linker.h"
using namespace std;


void increment(double round) {
	if (CALC_IN_PROGRESS == false) {
		double num;
		cout << "Number to increment (not excrement!!): ";
		cin >> num;
		num = num + 1;
		cout << "And your stinky result is .....: " << num;
		exitchoice(round);
	}
	if (CALC_IN_PROGRESS == true) {
		double num;
		num = round + 1;
		cout << "And your stinky result is .......: " << num;
		exitchoice(num);
	}
	
}