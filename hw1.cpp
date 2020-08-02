//==============================================================================
// Name          : hw1.cpp
// Author        : Jarrett Tang (903482852)
// Description   : hw1 assignment. compiled by running g++ using cygwin.
// gcc Ver       : 4.9.1
//==============================================================================

#include <iostream>
#include <assert.h>
using namespace std;

int main() {
	
	const double SWEETENER_IN_SODA = 0.001;
	double amountOfArtificialSweetener;
	double formula;
	int weightOfMouse;
	int weightOfDieter;
	// modified part for theory testing
	bool x = false;
	assert(x == true);
	
	// end of modified part
	
	cout << "What is the amount of artificial sweetener needed to kill a mouse: " << endl;
	cin >> amountOfArtificialSweetener;
	
	cout << "\n" << "What is the weight of the mouse: ";
	cin >> weightOfMouse;
	
	cout << "\nWhat is the weight of the dieter: ";
	cin >> weightOfDieter;
	
	formula = (weightOfDieter / weightOfMouse);
	formula = formula * amountOfArtificialSweetener;
	formula = formula / SWEETENER_IN_SODA;
	cout << "\nYou can drink " << formula << " diet soda without dying as a result." << endl;
	
	return 0;
}