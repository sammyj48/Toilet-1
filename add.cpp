#include <iostream>
#include "linker.h"
using namespace std;

int add(double round) {
	if (CALC_IN_PROGRESS == true) {
		double num2;
		cout << "Please type a number to add on: ";
		cin >> num2;
		double sum = round + num2;
		cout << "\nAnd this is your result ...... drum roll please ......: " << sum;
		exitchoice(sum);
	}
	if (CALC_IN_PROGRESS == false) {
		double num1;
		double num2;
		cout << "Please type the number of your dreams here: ";
		cin >> num1;
		cout << "\n\nAnd now type a number to add on to the number of your dreams: ";
		cin >> num2;
		double sum = num1 + num2;
		cout << "\n\nAnd your dreamy result is ........ drum roll please ........: " << sum;
		exitchoice(sum);

	}
	return 0;


}