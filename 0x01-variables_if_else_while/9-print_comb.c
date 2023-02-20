#include<stdio.h>

/**
* main - main block
* Description: a program that print all of the
* possible combination of single digit
* Return: always 0 (success)
*/

int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n != 57)
		{
		putchar(44);
		putchar(' ');
		}
	}
	putchar(10);
	return (0);
}
