#ifndef _COMPLEX_H_
#define _COMPLEX_H_

class Complex
{
public:
	Complex();
	Complex(const double real, const double image);
	Complex& operator=(const Complex& rhs);
	Complex& operator+=(const Complex& rhs);
	void print();
private:
	double m_RealPart;
	double m_ImagePart;
};

#endif // !_COMPLEX_H_
