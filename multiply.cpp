#include <iostream>
#include "linker.h"
using namespace std;


void multiply(double round) {
	if (round == NULL) {
		double num1, num2;
		cout << "Think of a number... any number... and type it right here!: ";
		cin >> num1;
		cout << "\nNow think of a number you'd like to multiply your first number by: ";
		cin >> num2;
		double sum = num1 * num2;
		cout << "And your result is ....... ta daaaa! .......: " << sum;
		exitchoice(sum);
	}
	if (round != NULL) {
		double num1;
		cout << "\nNumber to multiply by: ";
		cin >> num1;
		double sum = round * num1; cout << "And your result is .... ta daaa! ....: " << sum;
		exitchoice(sum);
	}
}