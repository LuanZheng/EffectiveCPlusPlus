#include "A.h"
void doSometing(A a);

int main()
{
	A a(3);
	doSometing(a);
	doSometing(4);       //auto implicit type conversions called!
	return 0;
}

void doSometing(A a)
{

}