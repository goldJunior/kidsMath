/*
 * NumberGenerator.h
 *
 *  Created on: Sep 12, 2019
 *      Author: DP24288
 */

#ifndef NUMBERGENERATOR_H_
#define NUMBERGENERATOR_H_

class NumberGenerator {
public:
	NumberGenerator(unsigned int limiter);

	unsigned int genUnsignedInt();

	virtual ~NumberGenerator();


private:
	unsigned int m_limit;
};

#endif /* NUMBERGENERATOR_H_ */
