#include<stdio.h>
#include <ctype.h>
/**
 *main:program to check whether a character is uppercase
 *Return:1 if c is uppercase
 */
int _insupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
