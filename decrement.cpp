#include <iostream>
#include "linker.h"
using namespace std;


void decrement(double round) {
	if (round == NULL) {
		double num;
		cout << "Number to decrement (not excrement!!): ";
		cin >> num;
		double sum = num - 1;
		cout << "And the poopy result is .......: " << sum;
		exitchoice(sum);
	}
	if (round != NULL) {
		double num = round - 1;
		cout << "And the poopy result is ........: " << num;
		exitchoice(num);
	}
}