#include <iostream>
#include "linker.h"
using namespace std;

int add(double round) {
	if (CALC_IN_PROGRESS == true) {
		double num2;
		cout << "Type another number to add: ";
		cin >> num2;
		double sum = round + num2;
		cout << "\nResult: " << sum;
		exitchoice(sum);
	}
	if (CALC_IN_PROGRESS == false) {
		double num1;
		double num2;
		cout << "Base number: ";
		cin >> num1;
		cout << "\n\nType number to add on to that: ";
		cin >> num2;
		double sum = num1 + num2;
		cout << "\n\nResult: " << sum;
		exitchoice(sum);

	}
	return 0;


}