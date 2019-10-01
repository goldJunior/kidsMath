/*
 * NumberGenerator.cpp
 *
 *  Created on: Sep 12, 2019
 *      Author: DP24288
 */

#include "NumberGenerator.h"

#include <time.h>
#include <stdlib.h>
#include <math.h>

NumberGenerator::NumberGenerator(unsigned int limiter) {
	srand(time(NULL));
	m_limit = limiter;
}


unsigned int NumberGenerator::genUnsignedInt() {
	return ( abs(rand()) % m_limit);
}



NumberGenerator::~NumberGenerator() {
	// TODO Auto-generated destructor stub
}

