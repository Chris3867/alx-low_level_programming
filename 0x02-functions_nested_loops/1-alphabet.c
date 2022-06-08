#include <stdio.h>
#include "main.h"

/**
* main - entry point
*
* Return: Always 0 (success)
*/

int main(void)
{
	int m;
	for (m = 'a'; m < 'z'; m++)
	{
		putchar(m);
	}
	putchar("\n");

	return (0);
}

