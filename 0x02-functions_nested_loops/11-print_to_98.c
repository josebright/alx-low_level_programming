#include "main.h"

/**
 * print_to_98 - Check Holberton
 * @num: A input integer
 * Description: function that prints all natural numbers
 * from num to 98, followed by a new line.
 * Return: Nothing
 */
void print_to_98(int num)
{
	if (num <= 98)
	{
		for (; num <= 98; num++)
		{
			printf("%d", num);

			if (num == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; num >= 98; num--)
		{
			printf("%d", num);
			if (num == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
}
