#include "main.h"
/**
 *_strcat - concatenates two string
 *
 *@dest: string to append to
 *@src: string to add
 *
 *Return: a pointer to the resulting string
 */
ar *_strcat(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (dest[x])
	{
		x++;
	}
	while (src[y])
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	return (dest);
}
