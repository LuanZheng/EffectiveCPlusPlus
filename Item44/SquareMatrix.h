#ifndef _SQUAREMATRIX_H_
#define _SQUAREMATRIX_H_
#include <iostream>

template<typename T>
class SquareMatrixBase
{
protected:
	SquareMatrixBase(std::size_t n, T* pMem);
	void invert(/*std::size_t matrixSize*/);
private:
	std::size_t size;
	T* pData;
};

template<typename T>
SquareMatrixBase<T>::SquareMatrixBase(std::size_t n, T * pMem) : size(n), pData(pMem)
{
}

template<typename T>
void SquareMatrixBase<T>::invert(/*std::size_t matrixSize*/)
{
	std::cout << "SquareMatrixBase<T>::insert(std::size_t matrixSize) called." << std::endl;
	std::cout << "This is the " << size << " complex matrix." << std::endl;
}


template <typename T, std::size_t n>
class SquareMatrix : private SquareMatrixBase<T>
{
public:
	SquareMatrix();
	void invert() 
	{ 
		SquareMatrixBase<T>::invert();        //this->和using方式竟然都不起作用，只能明确指出调用基类的invert...
	}
private:
	T data[n*n];
};

#endif // !_SQUAREMATRIX_H_

//template<typename T, std::size_t n>
//void SquareMatrix<T, n>::invert()
//{
//	std::cout << "SquareMatrix<T, n>::invert() called." << std::endl;
//	std::cout << "This is the " << n << " complex matrix." << std::endl;
//}

template<typename T, std::size_t n>
SquareMatrix<T, n>::SquareMatrix() : SquareMatrixBase<T>(n, data)
{
}
