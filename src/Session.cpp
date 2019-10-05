/*
 * Session.cpp
 *
 *  Created on: 5 Oct 2019
 *      Author: goldj
 */

#include "Session.h"


void Session::preSession() {
	m_stat->startMeasuring();
	return;
}


void Session::postSession() {
	m_stat->stopMeasuring();
	m_stat->printStat();
	return;
}


Session::~Session() {
	// TODO Auto-generated destructor stub
}

