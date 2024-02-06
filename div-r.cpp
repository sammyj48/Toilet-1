#include <iostream>
#include "linker.h"
using namespace std;


void divR(int round) {
	int num1, num2, sum, Remainder;
	if (round == NULL) {
		cout << "Base number: "; 
		cin >> num1;
		cout << "Number to divide by: ";
		cin >> num2;
		sum = num1 / num2;
		cout << "Result: " << sum;
		Remainder = num1 % num2;
		cout << "\n\nRemainder: " << Remainder;
		multinumchoice("remainder", sum, Remainder);
	}
	if (round != NULL) {
		cout << "Number to divide by: ";
		cin >> num1;
		Remainder = round % num1;
		sum = round / num1;
		cout << "Result: " << sum;
		cout << "\n\nRemainder: " << Remainder;
		multinumchoice("remainder", sum, Remainder);
	}
}