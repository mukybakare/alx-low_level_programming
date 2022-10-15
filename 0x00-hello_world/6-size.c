/**
 *main - heading of function
 *Description: print size of type
 *Return: value bring back zero
 */
#include<stdio.h>
int main(void)
{
char charType;
int intType;
long int long_int_type;
long long int long_long_int_type;
float floattype;
printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of an int: %zu byte(s)\n", sizeof(intType));
printf("Size of a long int: %zu byte(s)\n", sizeof(long_int_type));
printf("Size of a long long int: %zu byte(s)\n", sizeof(long_long_int_type));
printf("Size of a float: %zu byte(s)\n", sizeof(floattype));
return (0);
}
