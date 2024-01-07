#include <iostream>
#include "linker.h"
using namespace std;


void increment(double round) {
	if (round == NULL) {
		double num;
		cout << "Number to increment: ";
		cin >> num;
		num = num + 1;
		cout << "Result: " << num;
		exitchoice(round);
	}
	if (round != NULL) {
		double num;
		num = round + 1;
		cout << "Result: " << num;
		exitchoice(num);
	}
	
}