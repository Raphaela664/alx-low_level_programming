#include<stdio.h>


/**
 * main - Entry point
 *
 * Description: print all single digit numbers
 *
 * Return: Always 0 (Success)
*/


int main(void)

{

	int dig = 0;


	while (dig <= 9)

	{

		printf("%i", dig);

		++dig;

	}

	printf("\n");


	return (0);

}
