/*
 * CMatrix.h
 *
 *  Created on: 25.06.2020
 *      Author: Ole
 */

#ifndef CMATRIX_H_
#define CMATRIX_H_

class CMatrix
{
private:
	int m_rows;
	int m_cols;
	int m_size;
	double* m_pArray;
	int getArrayIndex(int rows,int cols);
public:
	CMatrix(int rows,int cols);
	CMatrix(const CMatrix& orig);
	virtual ~CMatrix();
	void getDimension(int& rows,int& cols);
	bool setElemntAt(int row, int col, double value);
	void multMatrix(double factor = 1);
	void print(CMatrix x);
};

#endif /* CMATRIX_H_ */
