#include <iostream>
#include "linker.h"
using namespace std;


void decrement(double round) {
	if (round == NULL) {
		double num;
		cout << "Number to decrement: ";
		cin >> num;
		double sum = num - 1;
		cout << "Result: " << sum;
		exitchoice(sum);
	}
	if (round != NULL) {
		double num = round - 1;
		cout << "Result: " << num;
		exitchoice(num);
	}
}