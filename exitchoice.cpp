#include <iostream>
#include "linker.h"
#include "Var.h"
#include <string>

using namespace std;


void exitchoice(double round) {
	string choice = "C";

	cout << endl << "\n\n\nType C to have another go, A to do something to your\nlatest result or type anything else to get the hell outta here!!!!: ";
	cin >> choice;
	if (choice == "C") { returnRound = NULL; main(); }
	else if (choice == "c") { returnRound = NULL;  main(); }
	else if (choice == "c") { returnRound = NULL;  main(); }

	else if (choice == "A") { returnReturnRound(round); }
	else if (choice == "a") { returnReturnRound(round); }


}

