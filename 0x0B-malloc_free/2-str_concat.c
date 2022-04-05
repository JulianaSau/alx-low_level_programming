#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string parameter
 * @s2: Second string parameter
 *
 * Return: pointer to the concatenated string(Success)
 * NULL if empty string(failure)
 */

char *str_concat(char *s1, char*s2)
{
	unsigned int i, j, len, index = 0;

	char *concat_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/*Getting length of the two strings*/
	for (index = 0; s1[index] || s2[index]; index++)
		len++;

	concat_str = malloc(sizeof(char) * len);

	if (concat_str == NULL)
		return (NULL);

	/*Copy contents of string 1 to concat_string*/
	for (i = 0; s1[i]; i++)
		concat_str[i] = s1[i];

	/*Copy contents of string 2 into concat_string*/
	for (j = 0; s2[j]; j++)
		concat_str[i++] = s2[j];

	return (concat_str);
}
