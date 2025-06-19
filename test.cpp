#include "test.h"

int factorial(int num)
{
	int result;
	
	if (0 == num || 1 == num)
	{
		result = 1;
	}
	else
	{
		result = num;
		
		for (int i = num - 1; i > 0; i--)
		{
			result = result * i; 
		}
	}
	
	return result;
}