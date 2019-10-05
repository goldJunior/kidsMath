/*
 * SessionComplex.h
 *
 *  Created on: 5 Oct 2019
 *      Author: goldj
 */

#ifndef SESSIONCOMPLEX_H_
#define SESSIONCOMPLEX_H_

#include "Session.h"
#include "Question.h"

class SessionComplex: public Session {
public:
	SessionComplex(const unsigned int numOfQuestions, Statistics *stat, NumberGenerator *ng, Question **q, const unsigned int numOfTypes) : Session(numOfQuestions, stat, ng) {
		m_question = q;
		m_numOfTypes = numOfTypes;
	};

	virtual void runSession();

	virtual ~SessionComplex();

private:
	unsigned int m_numOfTypes;
	Question **m_question;

};

#endif /* SESSIONCOMPLEX_H_ */
