#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to anewly allocated
 * space in memory which contains a copy of the
 * string given as a parameter
 *
 * @str: string to be newly allocated in memory
 *
 * Return: NULL if string is empty or insufficient memory
 * a pointer to the duplicated string (Success)
 */

char *_strdup(char *str)
{
	unsigned int index, length = 0;

	char *dup_string;

	if (str == NULL)
		return (NULL);

	/*getting the length of the string provided*/
	for (index = 0; str[index]; index++)
		length++;

	dup_string = malloc(sizeof(char) * (length + 1));

	if (dup_string == NULL)
		return (NULL);

	/*Duplicating string contents into second array*/
	while ((dup_string[index] = str[index]) != '\0')
		index++;

	return (dup_string);
}
