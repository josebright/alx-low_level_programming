#include "main.h"
/**
 * _isalpha - Check if character is a alphabet character.
 * @alph: type int character
 * Return: 1 if letter, lowercase or uppercase, and 0 otherwise
 */

int _isalpha(int alph)
{
	if ((alph >= 'a' && alph <= 'z') || (alph >= 'A' && alph <= 'Z'))
		return (1);

	else
		return (0);
}
