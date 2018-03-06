#include "AirplaneModelA.h"
#include "AirplaneModelB.h"
#include "AirplaneModelC.h"

int main()
{
	Airplane* pModelA = new AirplaneModelA();
	Airplane* pModelB = new AirplaneModelB();
	Airplane* pModelC = new AirplaneModelC();
	pModelA->fly();
	pModelB->fly();
	pModelC->fly();
	delete pModelA;
	delete pModelB;
	delete pModelC;
	return 0;
}