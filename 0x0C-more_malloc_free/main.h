#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

/**
*check_number - checks if string has one number
*
*@str: string
*
*return: 0 or 1
*/

int check_number(char *str)
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (1);
		str++;
	}
	return (0);
}


/**
*error_exit -print error with putchar
*	and exits with 98
*
*Return: error 98 and exit
*/

int error_exit(void)
{
	char *pt;
	int i;

	pt = "Error";
	for (i = 0; pt[i] != '\0'; i++)
		_putchar(pt[i]);
	_putchar('\n');
	exit(98);
}

/**
*_length -get length of the string
*
*@str: string to get length
*
*return: length of string
*/

int _length(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

#endif
