#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{

int i, j;

char c;

for (i = 0; i < 10; i++)
{

c = 'a';

for (j = 0; j < 26; j++)
{

putchar(c);

c++;

}

putchar('\n');

}

}
