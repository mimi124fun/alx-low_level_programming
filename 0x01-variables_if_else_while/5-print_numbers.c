#include<stdio.h>
/**
 *main - Prints all single digit numbers of base 10 from 0
 *only using putchar and without char variables
 *return:Always 0
 */
int main(void)
{
	int num;

	for (num = 0 ; num < 10 ; num++)
	putchar((num % 10) + '0');
	putchar(10);
	return (0);
}
