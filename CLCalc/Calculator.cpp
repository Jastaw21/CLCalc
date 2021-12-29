#include "Calculator.h"
#include <math.h>

long double Calculator::Calculate(long double x, char oper, long double y, char oper2 = '+', long double z = 0.0)
{
	switch (oper)

	{
	case '+':
		return (x + y) + z ;
	case '-':
		return (x - y)+z;
	case '*':
		return (x * y) +z;
	case '/':
		return (x / y)+z;
	case '^':
		return pow(x, y);
	default:
		return 0.0;
	}
	
}
