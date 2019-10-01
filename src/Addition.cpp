/*
 * Addition.cpp
 *
 *  Created on: Sep 12, 2019
 *      Author: DP24288
 */

#include "Addition.h"
#include <iostream>

using namespace std;


void Addition::ask() {
	cout << varA << " + " << varB << " = " ;
	cin >> usrRes;
}


void Addition::solve() {
	result = varA + varB;
}

Addition::~Addition() {
	// TODO Auto-generated destructor stub
}

