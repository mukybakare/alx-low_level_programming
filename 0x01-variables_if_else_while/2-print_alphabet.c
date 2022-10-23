#include<stdio.h>
#include<ctype.h>
#include <stdlib.h>
/**
*main - main block
*Description: A programme that prints lower case letters
*Return: 0
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
