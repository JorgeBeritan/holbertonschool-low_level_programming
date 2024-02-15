/**
 *main - Entry point
 *
 *Return: Always return 0 (Success)
**/
#include <stdio.h>
int main(void)
{
int a;
char b;
long int c;
long long int d;
float e;

printf("Size of a int: %ld bytes(s)\n", sizeof(a));
printf("Size of a char: %ld bytes(s)\n", sizeof(b));
printf("Size of a long int: %ld bytes(s)\n", sizeof(c));
printf("Size of a long long int: %ld bytes(s)\n", sizeof(d));
printf("Size of a float: %ld byte(s)\n", sizeof(e));
}
