#include "main.h"

/**
 * _strcmp - Entry point
 *
 * Description: compare 2 string
 * @s1: string
 * @s2: string
 *
 * Return: Always 0 (Success)
 */

int _strcmp(char *s1, char *s2)
{
  int i, k;
  for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
    {
      k = s1[i] - s2[i];
      
	  if (k != 0)
	    {
	      return (k);
	    }	    
	}
  return (k);
}
