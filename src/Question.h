/*
 * Question.h
 *
 *  Created on: Sep 12, 2019
 *      Author: DP24288
 */

#ifndef QUESTION_H_
#define QUESTION_H_

class Question {
public:

	Question(unsigned int varA, unsigned int varB) {
		this->varA = varA;
		this->varB = varB;
		result = 0;
		usrRes = 0;
	}

	virtual void ask() = 0;
	bool check();
	int getRes() {return result;}

	virtual ~Question();


protected:
	unsigned int varA, varB;
	int result, usrRes;


	virtual void solve() = 0;
	void swapValues() ;


private:

};

#endif /* QUESTION_H_ */
