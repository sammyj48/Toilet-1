#include <iostream>
#include "linker.h"
#include <cmath>
using namespace std;


void Pow(double round) {
	if (round == NULL) {
		double num1, num2, sum;
		cout << "Base number: ";
		cin >> num1;
		cout << "Exponent: ";
		cin >> num2;
		sum = pow(num1, num2);
		cout << "Result: " << sum;
		exitchoice(sum);
	}
	if (round != NULL) {
		double num, sum;
		cout << "Exponent: ";
		cin >> num;
		sum = pow(round, num);
		cout << "Result: " << sum;
		exitchoice(sum);
	}
}