#include <iostream>
#include "linker.h"
using namespace std;


void remain(int round){
	if (round == NULL) {
		int num1, num2;
		cout << "This one's more complicated.... Base number here please: ";
		cin >> num1;
		cout << "Now the number you want to divide it by: ";
		cin >> num2;
		double sum = num1 % num2;
		cout << "Now time to figure out what on earth the result means!!: " << sum;
		exitchoice(sum);

	}
	else if (round != NULL) {
		int num1;
		cout << "Number to divide by: ";
		cin >> num1;
		double sum = round % num1;
		cout << "Now time to figure out what on earth the result means!!!!: " << sum;
		exitchoice(sum);
	}
}