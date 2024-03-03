#include <iostream>
#include "linker.h"
#include "Var.h"
#include <string>

using namespace std;


void exitchoice(double round) {
	string choice = "C";

	cout << endl << "\n\n\nType C to have another go, A to do something to your\nlatest result or type anything else to get the hell outta here!!!!: ";
	cin >> choice;
	if (choice == "C" || choice == "c") { returnRound = NULL; CALC_IN_PROGRESS = false; main(); }

	else if (choice == "A" || choice == "a") { CALC_IN_PROGRESS = true; returnReturnRound(round); }


}

