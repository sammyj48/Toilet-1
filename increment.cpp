#include <iostream>
#include "linker.h"
using namespace std;


void increment(double round) {
	if (round == NULL) {
		double num;
		cout << "Number to increment (not excrement!!): ";
		cin >> num;
		num = num + 1;
		cout << "And your stinky result is .....: " << num;
		exitchoice(round);
	}
	if (round != NULL) {
		double num;
		num = round + 1;
		cout << "And your stinky result is .......: " << num;
		exitchoice(num);
	}
	
}