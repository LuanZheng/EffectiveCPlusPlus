#include "HomeForSale.h"
#include "Uncopyable.h"
#include "HomeForSale2.h"

int main()
{
	HomeForSale homeA;
	//HomeForSale homeB(homeA);      //���ɷ���
	HomeForSale homeB;
	//homeA = homeB;                 //���ɷ���

	//Uncopyable uncopyable;         //���ɷ���
	HomeForSale2 homeA2;
	//HomeForSale2 homeB2(homeA2);   //������������ɾ���ĺ���
	return 0;
}