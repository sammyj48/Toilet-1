#include <iostream>
#include "linker.h"
using namespace std;


void multiply(double round) {
	if (round == NULL) {
		double num1, num2;
		cout << "Base number: ";
		cin >> num1;
		cout << "\nNumber to multiply by: ";
		cin >> num2;
		double sum = num1 * num2; cout << sum;
		exitchoice(sum);
	}
	if (round != NULL) {
		double num1;
		cout << "\nNumber to multiply by: ";
		cin >> num1;
		double sum = round * num1; cout << "Result: " << sum;
		exitchoice(sum);
	}
}