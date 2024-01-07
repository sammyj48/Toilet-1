#include <iostream>
#include "linker.h"
#include "Var.h"
using namespace std;


void remain(int round){
	if (round == NULL) {
		int num1, num2;
		cout << "Base number: ";
		cin >> num1;
		cout << "Percent of: ";
		cin >> num2;
		double sum = num1 % num2;
		cout << "Result: " << sum;
		exitchoice(sum);
	}
	else if (round != NULL) {
		int num1;
		cout << "Percent of: ";
		cin >> num1;
		double sum = round % num1;
		cout << "Result: " << sum;
		exitchoice(sum);
	}
}