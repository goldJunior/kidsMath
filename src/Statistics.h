/*
 * Statistics.h
 *
 *  Created on: Sep 12, 2019
 *      Author: DP24288
 */

#ifndef STATISTICS_H_
#define STATISTICS_H_

#include <time.h>


class Statistics {
public:
	Statistics();

	void startMeasuring();
	void stopMeasuring();

	void incrementAnswers();
	void incrementCorrect();
	void incrementWrong();
	void printStat();

	virtual ~Statistics();


private:
	unsigned int m_totalAnswers   = 0;
	unsigned int m_CorrectAnswers = 0;
	unsigned int m_WrongAnswers   = 0;

	time_t        m_startTime      = 0;
	time_t        m_totalTime      = 0;
	float         m_AvgTime        = 0;
};

#endif /* STATISTICS_H_ */

