#include "dog.h"
#include <stdlib.h>

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int name_len = 0, owner_len = 0;
	char *name_copy, *owner_copy;
	
	for (name_copy = name; *name_copy != '\0'; name_copy++)
		name_len++;
	for (owner_copy = owner; *owner_copy != '\0'; owner_copy++)
		owner_copy++;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

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

	for (name_copy = (*new_dog).name; *name != '\0'; name_copy++, name++)
		*name_copy = *name;
	*name_copy = '\0';

	(*new_dog).age = age;

	for (owner_copy = (*new_dog).owner; *owner != '\0'; owner_copy++, owner++)
		*owner_copy = *owner;
	*owner_copy = '\0';

	return (new_dog);
}
