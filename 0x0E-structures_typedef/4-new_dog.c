#include "dog.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
*_strcpy - copy string pointed by src
*into dest variable
*@dest:buffer storing string copy
*@src: buffer storing string to copy
*Return:returns copied string
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - creates a new dog.
 * @name: name of dog
 * @age: age of dog
 * @owner: owner's name
 * Return: poiter to new dog
 */

dog_t *new_dog(char *name, float age __attribute__((unused)), char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	new->name = malloc(sizeof(name) + 1);
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}

	new->owner = malloc(sizeof(owner) + 1);
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}

	new->name = _strcpy(new->name, name);
	new->owner = _strcpy(new->owner, owner);

	new->age = age;
	return (new);
}
