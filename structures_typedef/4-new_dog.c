#include "dog.h"
#include <stdlib.h>

int
_strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

char
*_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

dog_t
*new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int name_len, owner_len;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	name_len = _strlen(name);
	owner_len = _strlen(owner);

	(*new_dog).name = malloc(name_len + 1);
	if ((*new_dog).name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	(*new_dog).owner = malloc(owner_len + 1);
	if ((*new_dog).owner == NULL)
	{
		free((*new_dog).name);
		free(new_dog);
		return (NULL);
	}

	_strcpy((*new_dog).name, name);
	(*new_dog).age = age;
	_strcpy((*new_dog).owner, owner);

	return (new_dog);
}
