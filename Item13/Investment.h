#ifndef _INVESTMENT_H_
#define _INVESTMENT_H_

class Investment
{
public:
	explicit Investment();
	~Investment();
	void invest(const int amount);
	Investment* get();
	void print();
};

#endif // !_INVESTMENT_H_

