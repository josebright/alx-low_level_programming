#include "main.h"
/**
 * _abs - compute the absolute value of an integer
 * @sign: int type number
 * Return: absolute value of @sign
 */
int _abs(int sign)
{
	if (sign < 0)
	{
		return (sign * -1);
	}
	else
	{
		return (sign);
	}
}
