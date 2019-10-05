/*
 * Session.h
 *
 *  Created on: 5 Oct 2019
 *      Author: goldj
 */

#ifndef SESSION_H_
#define SESSION_H_

#include "userData.h"
#include "Statistics.h"
#include "NumberGenerator.h"

class Session {
public:

	Session(const unsigned int numOfQuestions, Statistics *stat, NumberGenerator *ng) {
		m_numOfQuestions = numOfQuestions;
		m_stat = stat;
		m_NG = ng;
	}

	virtual void runSession() = 0;

	virtual ~Session();



protected:
	unsigned int m_numOfQuestions;
	Statistics *m_stat;
	NumberGenerator *m_NG;

	void preSession();
	void postSession();
};

#endif /* SESSION_H_ */
