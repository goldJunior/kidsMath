/*
 * Question.cpp
 *
 *  Created on: Sep 12, 2019
 *      Author: DP24288
 */

#include "Question.h"
#include <iostream>

bool Question::check() {
	solve();
	return (usrRes == result);
}

void Question::swapValues() {
	unsigned int temp = varA;
	varA = varB;
	varB = temp;
	return;
}


Question::~Question() {
	// TODO Auto-generated destructor stub
}

