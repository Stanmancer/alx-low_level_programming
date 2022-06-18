#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - function to compute the lenght of a string (NULL inclusive)
 * @src: string passed to function
 *
 * Note: if lenght = n (counting sequeence is 0, 1, 2 ...),
 * actual lenght is n+1 (counting sequence is 1, 2, 3 ...)
 *
 * Return: lenght of string passed to function
 */

int _strlen(char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{}

	return (a);
}

/**
 * _strcpy - function that copies a string
 * @src: string to be copied
 * @dest: destination to be copied to
 *
 * Return: pointer to copied string
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int b;

	i = _strlen(src);

	for (b = 0; b <= i; b++)
		dest[b] = src[b];

	return (dest);
}

/**
 * new_dog - function that creates a new dog
 * @name: new name of gog
 * @age: new age of dog
 * @owner: new owneer of dog
 *
 * Return: pointer to struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int a;
	int b;

	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}

	/* name initialization */
	a = _strlen(name);
	dog->name = malloc(sizeof(char) * (a + 1));

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	_strcpy(dog->name, name);

	/* age initialization */
	dog->age = age;

	/* owner initialization */
	b = _strlen(owner);
	dog->owner = malloc(sizeof(char) * (b + 1));

	if (dog->owner == NULL)
	{
		free(dog);
		return (NULL);
	}
	_strcpy(dog->owner, owner);

	return (dog);
}
