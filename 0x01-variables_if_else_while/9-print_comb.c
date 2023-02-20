#include<stdio.h>
/**
*main - main block
*Description: a program that print all of the
*possible combination of single digit
*return: always 0
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
		putchar(n);
	if (n != 57)
	{
	putchar(',');
	putchar('0');
	}
	n++;
	putchar(10);
	return (0);

}
