/*
 * Multi.h
 *
 *  Created on: 5 Oct 2019
 *      Author: goldj
 */

#ifndef MULTI_H_
#define MULTI_H_

#include "Question.h"

class Multi: public Question {
public:
	Multi(unsigned int varA, unsigned int varB) : Question(varA, varB) {};

	virtual void ask();

	virtual ~Multi();


protected:
	virtual void solve();
};

#endif /* MULTI_H_ */
