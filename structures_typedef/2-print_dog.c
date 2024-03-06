#include "dog.h"
#include <stdio.h>

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("(nil\n)");
		return;
	}
	printf("Name: ");
	if ((*d).name == NULL)
		printf("(nil)");
	else 
		printf("%s", (*d).name);
	printf("\n");

	printf("Age: %f\n", (*d).age);

	printf("Owner: ");
	if ((*d).owner == NULL)
		printf("(nil)");
	else
		printf("%s",(*d).owner);
	printf("\n");
}
