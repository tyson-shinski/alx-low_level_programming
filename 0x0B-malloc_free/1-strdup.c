#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */

char *_strdup(char *str)
{
    char *strout;
    unsigned int i, j;

    if (str == NULL)
        return (NULL);

    /* Calculate the length of the input string */
    for (i = 0; str[i] != '\0'; i++)
        continue;

    strout = (char *)malloc(sizeof(char) * (i + 1));
    if (strout == NULL)
        return (NULL);

    /* Copy the contents of the input string to the new memory location */
    for (j = 0; j <= i; j++)
        strout[j] = str[j];

    return (strout);
}
