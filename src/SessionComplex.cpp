/*
 * SessionComplex.cpp
 *
 *  Created on: 5 Oct 2019
 *      Author: goldj
 */

#include "SessionComplex.h"
#include  <iostream>

using namespace std;

void SessionComplex::runSession() {

	preSession();

	// Actual session
	for(unsigned int i = 0; i < m_numOfQuestions; i++)
	{
		/* Generate a pseudo random number to jump between question type in mixed only */
		unsigned int randQ = m_NG->genUnsignedInt() % m_numOfTypes ;


		m_question[randQ]->ask();
		m_stat->incrementAnswers();
		if(m_question[randQ]->check()) {
			cout << "GOOD" << endl;
			m_stat->incrementCorrect();
		} else {
			cout << "WRONG, the answer is : " << m_question[randQ]->getRes() << endl;
			m_stat->incrementWrong();
		}

		//change the numbers for the next question
		m_question[randQ]->changeValues(m_NG->genUnsignedInt(), m_NG->genUnsignedInt());

	}

	postSession();

	return;
}

SessionComplex::~SessionComplex() {
	// TODO Auto-generated destructor stub
}

