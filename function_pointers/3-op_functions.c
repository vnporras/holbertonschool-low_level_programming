#include "3-calc.h"

/**
 * op_add - Is a function.
 * @a: first integer.
 * @b: second integer.
 * Return: Isthe result of operation.
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
*op_sub - Is a function.
* @a: first integer.
* @b: second integer.
* Return: Isthe result of operation.
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
* op_mul - Is a function.
* @a: first integer.
* @b: second integer.
* Return: Isthe result of operation.
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
* op_div - Is a function.
* @a: first integer.
* @b: second integer.
* Return: Isthe result of operation.
*/
int op_div(int a, int b)
{
	if (b == '0')
	{
		printf("Error\n");
		return (a / 2);
	}
	else
	{
		return (a / b);
	}
}
/**
* op_mod - Is a function.
* @a: first integer.
* @b: second integer.
* Return: Isthe result of operation.
*/
int op_mod(int a, int b)
{
	if (b == '0')
	{
		printf("Error\n");
		return (a / 2);
	}
	else
	{
		return (a % b);
	}
}
