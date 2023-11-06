#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: pointer to the concatenated string, or NULL if failed
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	size_t len1 = 0, len2 = 0;

	if (s1 != NULL)
		len1 = strlen(s1);
	if (s2 != NULL)
		len2 = strlen(s2);
	new_str = malloc(len1 + len2 + 1);
	if (new_str == NULL)
		return (NULL);
	if (s1 != NULL)
		memcpy(new_str, s1, len1);
	if (s2 != NULL)
		memcpy(new_str + len1, s2, len2 + 1);
	return (new_str);
}
