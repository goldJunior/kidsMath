/*
 * Subtraction.cpp
 *
 *  Created on: Sep 12, 2019
 *      Author: DP24288
 */

#include "Subtraction.h"
#include <iostream>

using namespace std;


void Subtraction::ask() {
	cout << varA << " - " << varB << " = " ;
	cin >> usrRes;
}

void Subtraction::solve() {
	result = varA - varB;
}

Subtraction::~Subtraction() {
	// TODO Auto-generated destructor stub
}
