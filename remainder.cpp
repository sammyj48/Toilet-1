#include <iostream>
#include "linker.h"
using namespace std;


void remain(int round){
	if (CALC_IN_PROGRESS == false) {
		int num1, num2;
		cout << "Base number: ";
		cin >> num1;
		cout << "Divided by: ";
		cin >> num2;
		double sum = num1 % num2;
		cout << "Result: " << sum;
		exitchoice(sum);

	}
	else if (CALC_IN_PROGRESS == true) {
		int num1;
		cout << "Number to divide by: ";
		cin >> num1;
		double sum = round % num1;
		cout << "Result: " << sum;
		exitchoice(sum);
	}
}