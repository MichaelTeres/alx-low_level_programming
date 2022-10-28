#include "main.h"

/**
 * _strcat - A function that concatenates two strings
 * @src: An input string
 * @dest: An input string
 * Return: A pointer to the resulting the string
 */

char *_strncpy(char *dest, char *src, int n)
{
    // take a pointer pointing to the beginning of dest string
    char* start = dest;
    // copy first n characters of C-string pointed by src
    // into the array pointed by dest
    while (*src && n--)
    {
        *dest = *src;
        dest++;
        src++;
    }
    // null terminate dest string
    *dest = '\0';
    return start;
}
