/*
 * Statistics.cpp
 *
 *  Created on: Sep 12, 2019
 *      Author: DP24288
 */
#include <iostream>

#include "Statistics.h"
#include "time.h"

using namespace std;

Statistics::Statistics() {

}

void Statistics::startMeasuring() {
	m_startTime = clock();
}

void Statistics::stopMeasuring() {
	m_totalTime = clock() - m_startTime;
	m_AvgTime = m_totalTime / (float)m_totalAnswers;
}


void Statistics::incrementAnswers() {  	m_totalAnswers++; }
void Statistics::incrementCorrect() {  	m_CorrectAnswers++; }
void Statistics::incrementWrong() {  	m_WrongAnswers++; }

void Statistics::printStat() {
	cout << "***************  RESULTS  *************" << endl;
	cout << "***   num of correct answers : " << m_CorrectAnswers << "    ***" << endl;
	cout << "***   num of wrong   answers : " << m_WrongAnswers << "    ***" << endl;
	cout << "***   TOTAL TIME : "             << m_totalTime/1000 << " sec            ***" << endl;
	cout << "***   AVG TIME : "               << m_AvgTime/1000  << " sec         ***" << endl;
	cout << "***************************************" << endl;
}





Statistics::~Statistics() {
	// TODO Auto-generated destructor stub
}

