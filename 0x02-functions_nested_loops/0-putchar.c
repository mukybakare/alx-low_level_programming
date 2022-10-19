/**
 * main - Entry point
 * Description:'Printing _putchar'
 * Return:Alway 0 (success)
 */

#include<stdio.h>
int main(void)
{
	char *read = "_putchar\n";
	int i;

	for (i = 0; i <= 10; i++)
		while (*read)
		{
			putchar(*read);
			read++;
		}
	putchar('\n');
	return (0);

}


