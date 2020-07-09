/*
 * CMatrix.cpp
 *
 *  Created on: 25.06.2020
 *      Author: Ole
 */

#include <iostream>
#include <stdlib.h>
#include "CMatrix.h"
using namespace std;

CMatrix::CMatrix(int rows, int cols)
{
	if(rows <= 0)
	{
		rows = 1;
	}
	if(cols <= 0)
	{
		cols = 1;
	}
	m_rows = rows;
	m_cols = cols;
	m_size = m_rows * m_cols;
	m_pArray = new double [m_size];
	/*for(int i = 0; i < m_size; i++)
	{
	m_pArray[i] = 0;
	}*/
}

CMatrix::CMatrix(const CMatrix &orig)
{
	m_pArray = orig.m_pArray;
	m_size = orig.m_size;
	m_cols = orig.m_cols;
	m_rows = orig.m_rows;
}

CMatrix::~CMatrix()
{
	delete [] m_pArray;
}

void CMatrix::getDimension(int &rows, int &cols)
{
	rows = m_rows;
	cols = m_cols;
}

int CMatrix::getArrayIndex(int rows, int cols)
{
	int i = (rows - 1) * m_cols + cols -1;
	return i;
}

bool CMatrix::setElemntAt(int row, int col, double value)
{
	int i = getArrayIndex(row,col);
	m_pArray[i] = value;
	return 0;
}

void CMatrix::multMatrix(double factor)
{
	for(int i = 0;i < m_size; i++)
	{
		m_pArray[i] = m_pArray[i] * factor;
	}
}

void CMatrix::print(CMatrix x)
{
	cout << "("<< m_rows << "X" << m_cols << ")-CMatrix@" << &x << ":m_pArray@"
			<< &m_pArray << "(Groesse " << m_size << " Elemente)" << endl;
	for(int i = 0; i < m_rows; i++)
	{
		for(int a = 0; a < m_cols; a++)
		{
			int index = getArrayIndex(i+1,a+1);
			cout <<"  " << m_pArray[index] <<"  ";
		}
		cout << "\n";
	}

}

