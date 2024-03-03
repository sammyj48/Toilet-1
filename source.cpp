#include <iostream>
#include "linker.h"
double returnRound;
bool CALC_IN_PROGRESS = false;

using namespace std;



int main() {
	int intTransfer = returnRound;
choose:
	int mode;
	cout << "Don't enter a number too big. (higher than 2,147,483,647) Or the program\nwill get stuck in an infinite loop.\n\nType 1 to use addition mode, 2 to use subtraction mode\nor 3 to use multiplication mode,\n4 for division, 5 to get the remainder of a division, 6 to use increment,\n7 to use decrement, 8 to toggle between positive and negative,\n9 to round to the nearest whole number,\n10 to round up to the nearest whole number, 11 to do the same but round down,\n12 to do a division with a remainder, 13 to set the number, 14 to get your latest result or 100 to cancel.\nRemainder/Remainder-division only work with whole numbers.\n";
	cin >> mode;
	if (mode == 1) add(returnRound);
	else if (mode == 2) sub(returnRound);
	else if (mode == 3) multiply(returnRound);
	else if (mode == 4) divide(returnRound);
	else if (mode == 5) remain(intTransfer);
	else if (mode == 6) increment(returnRound);
	else if (mode == 7) decrement(returnRound);
	else if (mode == 8) unaryAdd(returnRound);
	else if (mode == 9) roundMode(returnRound);
	else if (mode == 10) roundCeil(returnRound);
	else if (mode == 11) roundFlr(returnRound);
	else if (mode == 12) divR(intTransfer);
	else if (mode == 13) {
		if (CALC_IN_PROGRESS) setNumber(returnRound);
		else {
			cout << "This only works if you choose the A option while in the exit choice screen\n";
			goto choose;
		}
	}
	else if (mode == 14) {
		cout << "Latest result is: " << returnRound << endl; goto choose;
	}
	else if (mode == 15) Pow(returnRound);
	else if (mode == 100) return 0;
	else {
		cout << "Invalid mode. Please choose again.\n"; goto choose;
	}
}

void returnReturnRound(double round) {
	returnRound = round;
	main();
}
