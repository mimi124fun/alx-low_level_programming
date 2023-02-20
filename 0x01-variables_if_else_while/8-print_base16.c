#include<stdio.h>

/**
 * main - main block
 * description: printing the numbers in the base of 16
 * Return: always 0
 */

int main(void)
{
	int num;
	char la;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	for (la = 'a'; la <= 'f' ; la++)
		putchar(la);
	putchar(10);
	return (0);
}
