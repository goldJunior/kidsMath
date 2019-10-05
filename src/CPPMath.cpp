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

using namespace std;

int main() {

	static const unsigned int NUM_OF_ITER = 10;

	UserData *  userData = new UserData();
	NumberGenerator * NG = new NumberGenerator(userData->getLimit());
	Statistics * stat    = new Statistics();
	Question *q;

	stat->startMeasuring();

	for(unsigned int i = 0; i < NUM_OF_ITER; i++)
	{

		switch (userData->getMathType()) {
		case ADD       :
			q = new Addition(NG->genUnsignedInt(), NG->genUnsignedInt());
			break;
		case SUBTRACT  :
			q = new Subtraction(NG->genUnsignedInt(), NG->genUnsignedInt(), (userData->getOrder() == E_Order::LARGE_FIRST));
			break;
		case MULTIPLY :
			q = new Multi(NG->genUnsignedInt(), NG->genUnsignedInt());
			break;
		case MIXED     :
			switch (NG->genUnsignedInt() % 3) {
			case 0:
				q = new Addition(NG->genUnsignedInt(), NG->genUnsignedInt());
				break;
			case 1:
				q = new Subtraction(NG->genUnsignedInt(), NG->genUnsignedInt(), (userData->getOrder() == E_Order::LARGE_FIRST));
				break;
			case 2:
				q = new Multi(NG->genUnsignedInt(), NG->genUnsignedInt());
				break;
			}
			break;
		}




		q->ask();
		stat->incrementAnswers();

		if(q->check()) {
			cout << "GOOD" << endl;
			stat->incrementCorrect();
		} else {
			cout << "WRONG, the answer is : " << q->getRes() << endl;
			stat->incrementWrong();
		}

		q->~Question();

	}

	stat->stopMeasuring();
	stat->printStat();
	stat->~Statistics();
	NG->~NumberGenerator();


	return 0;
}
