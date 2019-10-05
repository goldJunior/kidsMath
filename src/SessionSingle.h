/*
 * SessionSingle.h
 *
 *  Created on: 5 Oct 2019
 *      Author: goldj
 */

#ifndef SESSIONSINGLE_H_
#define SESSIONSINGLE_H_

#include "Session.h"
#include "Question.h"

class SessionSingle: public Session {
public:
	SessionSingle(const unsigned int numOfQuestions, Statistics *stat, NumberGenerator *ng, Question **q) : Session(numOfQuestions, stat, ng) {
		m_question = q;
	};

	virtual void runSession();

	virtual ~SessionSingle();

private:
	Question **m_question;
};

#endif /* SESSIONSINGLE_H_ */
