#include<stdio.h>
/**
 *main -A program that prints the size of various computer types
 *Return: Always 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char:%u bytes\n", (unsigned long)sizeof(a));
	printf("Size of an int:%u bytes\n", (unsigned long)sizeof(b));
	printf("Size of a long int:%u bytes\n", (unsigned long)sizeof(c));
	printf("Size of a long long int:%u bytes\n", (unsigned long)sizeof(d));
	printf("Size of a float:%u bytes\n", (unsigned long)sizeof(f));
	return (0);
}
