#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main-Function to print the alphabet
 * in lower case
 * in upper case
 * Return: Success (0)
 */
int main(void)
{
char x;

for (int x = 'A'; x <= 'Z'; x++)
{
int lower_x = tolower(x);
putchar(lower_x);

}
for (int x = 'a'; x <= 'z'; x++)
{
int Capital_x = toupper(x);
putchar('\n');
}
return (0);
}
