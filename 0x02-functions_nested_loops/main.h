#ifndef MAIN_FILE_H
#define MAIN_FILE_H

/**
 * _putchar - this function writes char
 * to the stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 *
 * @c: the cahracter that will be printedout
 */

int _putchar(char); /*function prototype for putchar.c*/
void print_alphabet(void);

void print_alphabet_x10(void);

int _islower(int c);

int _isalpha(int c);

int print_sign(int n);

int _abs(int);

int print_last_digit(int);

void jack_bauer(void);

void times_table(void);

int add(int, int);

void print_to_98(int n);

void print_times_table(int n);

#endif
