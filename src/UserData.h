/*
 * UserData.h
 *
 *  Created on: Sep 12, 2019
 *      Author: DP24288
 */

#ifndef USERDATA_H_
#define USERDATA_H_

enum E_mathType{ ADD = 0, SUBTRACT,  MULTIPLY, MIXED};
enum E_Order{ LARGE_FIRST = 0, RANDOM_FIRST};

class UserData {
public:
	UserData();

	unsigned int  getLimit()    {return m_limit;   }
	E_mathType    getMathType() {return m_mathType;}
	E_Order       getOrder()    {return m_order;   }

	virtual ~UserData();

private:
	unsigned int m_limit = 0;
	E_mathType   m_mathType = ADD;
	E_Order      m_order = RANDOM_FIRST;

};

#endif /* USERDATA_H_ */
