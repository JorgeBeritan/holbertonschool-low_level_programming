#ifndef DOG_H
#define DOG_H

/**
 * struct dog - estructra de datos
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of de dog
 *
 * Return: no necesary
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif