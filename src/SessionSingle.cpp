/*
 * SessionSingle.cpp
 *
 *  Created on: 5 Oct 2019
 *      Author: goldj
 */

#include "SessionSingle.h"
#include  <iostream>

using namespace std;


void SessionSingle::runSession() {

	preSession();

	// Readability
	Question *q = m_question[0];
	// Actual session
	for(unsigned int i = 0; i < m_numOfQuestions; i++)
	{
		/* Generate a pseudo random number to jump between question type in mixed only */
		q->ask();
		m_stat->incrementAnswers();
		if(q->check()) {
			cout << "GOOD" << endl;
			m_stat->incrementCorrect();
		} else {
			cout << "WRONG, the answer is : " << q->getRes() << endl;
			m_stat->incrementWrong();
		}

		q->changeValues(m_NG->genUnsignedInt(), m_NG->genUnsignedInt());

	}

	postSession();

	return;
}

SessionSingle::~SessionSingle() {
	// TODO Auto-generated destructor stub
}

