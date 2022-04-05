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

char *_strdup(cahr *str)
{
	int index, length = 0;

	char *str2;

	if (str == NULL)
		return (NULL);

	/*getting the length of the string provided*/
	for (index = 0; str[index]; index++)
		length++;

	str2 = malloc(sizeof(char) * (length + 1));

	if (str2 == NULL)
		return (NULL);

	/*Duplicating string contents into second array*/
	for (index = 0; str[index]; index++)
		str2[1] = str[1];

	str2[i + 1] = '\0';

	return (str2);
}
