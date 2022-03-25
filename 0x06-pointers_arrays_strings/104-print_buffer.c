#include "main.h"
#include <stdio.h>

/**
 *print_buffer - Print a buffer 10 bytes per line.
 *@b: Buffer address.
 *@size: Number of characters to be printed.
 */
void print_buffer(char *b, int size)
{
	int j, i, l;

	if (size <= 0)
		printf("\n");
	else
	{
		for (j = 0; j < size; j += 10)
		{
			printf("%.8x:", j);
			for (i = j; i < j + 10; i++)
			{
				if (i % 2 == 0)
					printf(" ");
				if (i < size)
					printf("%.2x", *(b + i));
				else
					printf("  ");
			}
			printf(" ");
			for (l = j; l < j + 10; l++)
			{
				if (l >= size)
					break;
				if (*(b + l) < 32 || *(b + l) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + l));
			}
			printf("\n");
		}
	}
}
