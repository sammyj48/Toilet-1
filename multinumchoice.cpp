#include <iostream>
#include "linker.h"
using namespace std;

void multinumchoice(string param1, double num1, double num2) {
	char choice;
	cout << "\n\nDo you want to use the result as your \"latest result\" (R) or the " << param1 << " instead (O)?\n";
	cin >> choice;
	if (choice == 'R' || choice == 'r') {
		exitchoice(num1);
	}
	else if (choice == 'O' || choice == '0' || choice == 'o') {
		exitchoice(num2);
	}

}