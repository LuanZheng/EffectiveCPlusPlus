#ifndef _CALCULATE_H_
#define _CALCULATE_H_

class StandardStrategy;

class Calculator
{
public:
	Calculator(StandardStrategy* pSS);
	void calculate();
private:
	StandardStrategy* mp_SS;
};

#endif // !_CALCULATE_H_

