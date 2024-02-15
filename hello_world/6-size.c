/**
 *main - Entry point
 *
 *Return: Always return 0 (Success)
**/
#include <stdio.h>
int main(void)
{

char a;
int b;
long int c;
long long int d;
float e;

printf("Size of a char: %ld byte(s)", sizeof(a));
printf("Size of an int: %ld bytes(s)", sizeof(b));
printf("Size of a long int: %ld bytes(s)", sizeof(c));
printf("Size of a long long int: %ld byte(s)", sizeof(d));
printf("Sieze of a float: %ld byte(s)", sizeof(e));
}
