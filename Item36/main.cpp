#include "BD.h"

void main()
{
	D x;
	
	B* pB = &x;
	pB->mf();

	D* pD = &x;
	pD->mf();

	return;
}