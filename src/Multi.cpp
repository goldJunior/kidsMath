/*
 * Multi.cpp
 *
 *  Created on: 5 Oct 2019
 *      Author: goldj
 */

#include "Multi.h"
#include <iostream>

using namespace std;



void Multi::ask() {
	cout << varA << " X " << varB << " = ";
	cin >> usrRes;
}

void Multi::solve() {
	result = varA * varB;
}

Multi::~Multi() {
	// TODO Auto-generated destructor stub
}

