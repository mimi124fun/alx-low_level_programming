#include<stdio.h>
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
