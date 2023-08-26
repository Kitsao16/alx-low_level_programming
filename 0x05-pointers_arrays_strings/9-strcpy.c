#include "main.h"
/**
 * char *_strcpy - function that copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer varible that points to buffer
 * @src: copies the string pointed to by src
 * Return: always 0
 */
char *_strcpy(char *dest, const char *src)
{
	int l = 0;
	int i;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for (i = 0; i < l; i++)
	{
		dest[i] = src[i];
	}
	dest[l] = '\0';
	return (dest);
}
