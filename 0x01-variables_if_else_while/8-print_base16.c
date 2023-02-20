#include<stdio.h>
/**
 *main - main drop
 *description: printing the numbers in the base of 16
 * return: always 0
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
