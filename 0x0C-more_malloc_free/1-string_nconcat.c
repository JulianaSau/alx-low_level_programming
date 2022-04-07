#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings using at
 *                  most an inputted number of bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the concatenated space in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_string;
	unsigned int i, j, len1, len2 = 0;

	while (s1 && s1[len1])
		len1++;

	while (s2 && s2[len2])
		len2++;

	/*allocating mem space using malloc*/
	if (n < len2)
		concat_string = malloc(sizeof(char) * (len1 + n + 1));
	else
		concat_string = malloc(sizeof(char) * (len1 + len2 + 1));

	/*if concat_string is empty then return null*/
	if (!concat_string)
		return (NULL);

	/*Copying contents of s1 to concat_string*/
	while (i < len1)
	{
		concat_string[i] = s1[i];
		i++;
	}

	/*Handling the case where n < len2*/
	while (n < len2 && i < (len1 + n))
		concat_string[i++] = s2[j++];

	/*Handling case where n >= len2*/
	while (n >= len2 && i < (len1 + len2))
		concat_string[i++] = s2[j++];

	/*put null character at the end of string*/
	concat_string[i] = '\0';

	return (concat_string);
}
