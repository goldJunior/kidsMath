/*
 * Subtraction.h
 *
 *  Created on: Sep 12, 2019
 *      Author: DP24288
 */

#ifndef SUBTRACTION_H_
#define SUBTRACTION_H_

#include "Question.h"

class Subtraction: public Question {
public:
	Subtraction(unsigned int varA, unsigned int varB) : Question(varA, varB) {} ;
	Subtraction(unsigned int varA, unsigned int varB, bool swapNeeded) : Question(varA, varB) {
		if(varA < varB)
			Question::swapValues();
	} ;

	virtual void ask() ;
	virtual ~Subtraction();

protected:
	virtual void solve();
};

#endif /* SUBTRACTION_H_ */
