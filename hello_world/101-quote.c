#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: write
 * parameter: void
 *
* Return: Always 0 (Success)
 */

int main(void)
{
char *c = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, c, 59);
return (1);
}
