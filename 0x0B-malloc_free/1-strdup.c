#include <stdlib.h>

char *_strdup(char *str)
{
    if (str == NULL)
        return NULL;

    // Calculate the length of the input string
    int length = 0;
    while (str[length] != '\0')
        length++;

    // Allocate memory for the new string (including space for the null terminator)
    char *duplicate = (char *)malloc((length + 1) * sizeof(char));
    if (duplicate == NULL)
        return NULL;

    // Copy the contents of the input string to the new memory location
    for (int i = 0; i <= length; i++)
        duplicate[i] = str[i];

    return duplicate;
}
