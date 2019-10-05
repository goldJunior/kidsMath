/*
 * UserData.cpp
 *
 *  Created on: Sep 12, 2019
 *      Author: DP24288
 */

#include "UserData.h"

#include <iostream>

using namespace std;

UserData::UserData() {
	unsigned int userResponse;
	cout << "Write your number limit : " ;
	cin >> m_limit;

	cout << "PLUS - 0, MINUS - 1, MULTIPLY - 2, MIXED - 3 : " ;
	cin >> userResponse;
	m_mathType = (E_mathType)userResponse;


	if(m_mathType == E_mathType::SUBTRACT || m_mathType == E_mathType::MIXED) {
		cout << "REGULAR - 0, RANDOM - 1 : " ;
		cin >> userResponse;
	} else {
		userResponse = 0;
	}

	m_order = (E_Order)userResponse;
}

UserData::~UserData() {
	// TODO Auto-generated destructor stub
}

