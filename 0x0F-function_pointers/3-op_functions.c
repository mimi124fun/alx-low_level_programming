#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
* op_add - Returns the sum of two numbers.
* @a: The first number.
* @b: The second number.
*description:return the sum  of tzo number op_add
* Return: The sum of a and b.
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
* op_sub - Returns the difference of two numbers.
* @a: The first number.
* @b: The second number.
*description:return the difference of tzo numbers op_sub
* Return: The difference of a and b.
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
* op_mul - Returns the product of two numbers.
* @a: The first number.
* @b: The second number.
*description:return the product of two nu,bers op_mul
* Return: The product of a and b.
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
* op_div - Returns the division of two numbers.
* @a: The first number.
* @b: The second number.
*description:return the division of tzo numnbers op_div
* Return: The quotient of a and b.
*/
int op_div(int a, int b)
{
	return (a / b);
}
/**
* op_mod - Returns the remainder of the division of two numbers.
* @a: The first number.
* @b: The second number.
*description : return the re,qinder of tzo number op_mod
* Return: The remainder of the division of a by b.
*/
int op_mod(int a, int b)
{
	return (a % b);
	op_mod;
}
