#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

char str[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\n";

int i;

for (i = 0; i < 26; i++)
{

putchar(str[i]);

}

putchar('\n');

return (0);

}
