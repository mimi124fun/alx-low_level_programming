#include<stdio.h>
/**
 *main - prints all combination of single digits
 *description: all co,binqtion of single digit
 *return: always 0
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
		putchar(n);
	if (n != 57)
	putchar(',');
	putchar('0');
	putchar(10);
	return (0);

}
