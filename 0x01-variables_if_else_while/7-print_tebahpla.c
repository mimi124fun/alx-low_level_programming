# include<stdio.h>
/**
 * main -  main block
 * description:print the alphabets in reverse
 * Return: always 0
 */
int main(void)
{
	char le;

	for (le = 'z' ; le >= 'a'; le--)
	putchar(le);
	putchar(10);
	return (0);
}
