#ifndef _HOME_FOR_SALE_H_
#define _HOME_FOR_SALE_H_

class HomeForSale
{
public:
	HomeForSale();
	void TestCopyInClass();
private:
	HomeForSale(const HomeForSale &);
	HomeForSale& operator=(const HomeForSale &);
};

#endif // !_HOME_FOR_SALE_H_

