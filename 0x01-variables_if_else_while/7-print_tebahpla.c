# include<stdio.h>
/**
 * main -print the alphabet in reverse
 * return: always 0
 */
int main(void)
{
	char le;

	for (le = 'z' ; le >= 'a'; le--)
	putchar(le);
	putchar(10);
	return (0);
}
