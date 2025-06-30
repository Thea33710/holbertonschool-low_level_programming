#include "main.h"
#include <stddef.h>

/**
 * *_strstr - Entry point
 *
 * @haystack: string
 * @needle: string
 *
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
if (*needle == '\0')
{
return (haystack);
}
while (*haystack != '\0')
{
char *s = haystack;
char *c = needle;
while (*c != '\0' && *s != '\0' && *s == *c)
{
c++;
s++;
}
if (*c == '\0')
{
return (haystack);
}
haystack++;
}
return (NULL);
}
