#include <memory>
#include <iostream>
#include "SimpleFactory.h"

void AutoPtrVersion()
{
	//Investment *pInv = SimpleFactory::getInstance()->createInv();  //�������������¿��ܵ��ڴ�й¶
	std::auto_ptr<Investment> pInv(SimpleFactory::getInstance()->createInv());  //�Զ��������Դ������ָ�룩���ڶ�������ʱ�����Զ��ͷ���Դ

	std::auto_ptr<Investment> pInv1(SimpleFactory::getInstance()->createInv());  //�Զ��������Դ������ָ�룩���ڶ�������ʱ�����Զ��ͷ���Դ
	std::auto_ptr<Investment> pInv2(pInv1);  //�������캯�����ᵼ��pInv1���null,pInv2�����ָ�Ķ���
	pInv1 = pInv2;                           //��ֵ��������ᵼ��pInv2���null,pInv1�����ָ�Ķ���

	std::cout << "Auto Ptr will be finished." << std::endl;
}

//void daysHeld(Investment* pi);  //ǰ������

void daysHeld(Investment* pi)     //���ߺ��������ڱ�����֮ǰ
{
	std::cout << "Days Held called." << std::endl;
	pi->print();
}

void RCSPVersion()
{
	std::tr1::shared_ptr<Investment> pInv1(SimpleFactory::getInstance()->createInv());
	std::tr1::shared_ptr<Investment> pInv2(SimpleFactory::getInstance()->createInv());
	pInv1 = pInv2;              //������auto_ptr�������Ϊ��pInv1,pInv2��ָ��ͬһ�ڴ棨pInv2����pInv1��ԭ���ڴ�ᱻ�ͷ�
	
	daysHeld(pInv1.get());

	std::tr1::shared_ptr<Investment> pInv3(SimpleFactory::getInstance()->createInvReturnSmartPtr());
	pInv3->print();
	daysHeld(pInv3.get());

	std::cout << "RCSP will be finished." << std::endl;
}





int main()
{
	if (true)
	{
		AutoPtrVersion();
		RCSPVersion();
	}
	else
	{

	}
	std::cout << "Finished." << std::endl;
	return 0;
}