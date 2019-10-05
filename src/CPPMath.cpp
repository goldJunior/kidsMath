//============================================================================
// Name        : CPPMath.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "NumberGenerator.h"
#include "Addition.h"
#include "Subtraction.h"
#include "Multi.h"
#include "UserData.h"
#include "Statistics.h"
#include "SessionSingle.h"
#include "SessionComplex.h"

using namespace std;

int main() {

	//Define
	static const unsigned int NUM_OF_ITER = 10;


	UserData *  userData = new UserData();
	NumberGenerator * NG = new NumberGenerator(userData->getLimit());
	Statistics * stat    = new Statistics();
	Question *q[3] = {nullptr, nullptr,nullptr} ;
	Session * session;


	/* Create & Run session */
	if(userData->getMathType() == MIXED) {
		q[ADD]      = new Addition(NG->genUnsignedInt(), NG->genUnsignedInt());
		q[SUBTRACT] = new Subtraction(NG->genUnsignedInt(), NG->genUnsignedInt(), (userData->getOrder() == E_Order::LARGE_FIRST));
		q[MULTIPLY] = new Multi(NG->genUnsignedInt(), NG->genUnsignedInt());
		session = new SessionComplex(NUM_OF_ITER, stat, NG, q, MIXED);
	} else {
		switch (userData->getMathType()) {
			case ADD:
				q[0] = new Addition(NG->genUnsignedInt(), NG->genUnsignedInt());
				break;
			case SUBTRACT:
				q[0] = new Subtraction(NG->genUnsignedInt(), NG->genUnsignedInt(), (userData->getOrder() == E_Order::LARGE_FIRST));
				break;
			case MULTIPLY:
				q[0] = new Multi(NG->genUnsignedInt(), NG->genUnsignedInt());
				break;
			default:
				q[0] = new Addition(NG->genUnsignedInt(), NG->genUnsignedInt());
				break;
		}
		session = new SessionSingle(NUM_OF_ITER, stat, NG, q);
	}

	session->runSession();


	//KILL Em ALL
	stat->~Statistics();
	for(int iter = ADD; iter < MIXED; iter++ ) {
		if(q[iter] != nullptr) {
			q[iter]->~Question();
		}
	}
	NG->~NumberGenerator();
	session->~Session();



	return 0;
}
