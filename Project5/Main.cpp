#include "Main.h"

int main()
{
	float x, y, res = 0.0;
	char op;

	cin >> x;
	printf("\n");

	cin >> op;
	printf("\n");

	cin >> y;
	printf("\n");

	
	switch (op)
	{
	case '+': funcp(x, y, res); break;
	case '-': funcm(x, y, res); break;
	case '*': funcy(x, y, res); break;
	case '/': funcd(x, y, res); break;
	default: cout << "error" << endl;
		return 0;
		break;
	}
	
	cout << res;
	printf("\n");
	

}