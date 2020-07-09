
#include <iostream>
#include <stdlib.h>
#include "CMatrix.h"

using namespace std;
int main (void)
{
	CMatrix m1(4,3);		//Create Object m1. 	A 4x3 Matrix
	m1.print(m1);			//Print m1
	m1.setElemntAt(1,1,1);		//entering values to the Matrix
	m1.setElemntAt(1,2,2);
	m1.setElemntAt(1,3,-1);
	m1.setElemntAt(2,1,-2);
	m1.setElemntAt(2,2,-4);
	m1.setElemntAt(2,3,6);
	m1.setElemntAt(3,1,-8);
	m1.setElemntAt(3,2,1);
	m1.setElemntAt(3,3,3);
	m1.setElemntAt(4,1,4);
	m1.setElemntAt(4,2,2);
	m1.setElemntAt(4,3,0);
	m1.print(m1);			//Print Matrix with new values

	CMatrix m2(m1);			//Copy Matrix m1 into Matrix m2
	m2.print(m2);			//Print m2

	m1.multMatrix(2);		//Multiply m1 by 2
	m1.print(m1);			//Print m1

	return 0;
}
