#include<stdio.h>
/**
 * main -Print the alphabet in lowercas and then in uppercases
 * Return:: Always 0
 */
int main(void)
{
char letter;
for (letter = 'a' ; letter <= 'z' ; letter++)
putchar(letter);
for (letter = 'A'; letter <= 'Z'; letter++)
putchar(letter);
putchar(10);
return (0);
}
