#include "Func.h"

void funcp(float& x, float& y, float& res)
{
	res = x + y;
	return;
}

void funcm(float& x, float& y, float& res)
{
	res = x - y;
	return;
}

void funcy(float& x, float& y, float& res)
{
	res = x * y;
	return;
}

void  funcd(float& x, float& y, float& res)
{ 
	if (y != 0)
	{
		res = x / y;
		return;
	}
	else cout << "error" << endl;
}
