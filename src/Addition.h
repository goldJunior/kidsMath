/*
 * Addition.h
 *
 *  Created on: Sep 12, 2019
 *      Author: DP24288
 */

#ifndef ADDITION_H_
#define ADDITION_H_

#include "Question.h"

class Addition: public Question {
public:
	Addition(unsigned int varA, unsigned int varB) : Question(varA, varB) {} ;

	virtual void ask() ;

	virtual ~Addition();

protected:
	virtual void solve();
};

#endif /* ADDITION_H_ */
