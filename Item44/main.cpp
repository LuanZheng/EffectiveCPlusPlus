#include <iostream>
#include "SquareMatrix.h"

int main()
{
	SquareMatrix<double, 1> sm1;
	SquareMatrix<double, 2> sm2;
	SquareMatrix<double, 3> sm3;
	SquareMatrix<double, 4> sm4;
	SquareMatrix<double, 5> sm5;
	SquareMatrix<double, 6> sm6;
	SquareMatrix<double, 7> sm7;
	SquareMatrix<double, 8> sm8;
	SquareMatrix<double, 9> sm9;
	SquareMatrix<double, 10> sm10;

	sm1.invert();
	sm2.invert();
	sm3.invert();
	sm4.invert();
	sm5.invert();
	sm6.invert();
	sm7.invert();
	sm8.invert();
	sm9.invert();
	sm10.invert();

	return 0;
}