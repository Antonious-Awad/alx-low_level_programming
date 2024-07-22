#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: dog pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t doggo;

	if (name == NULL || owner == NULL)
		return (NULL);

	doggo.name = name;
	doggo.age = age;
	doggo.owner = owner;

	return (&doggo);
}
