#include<stdio.h>
/**
 * swap_int - Swaps the value of two integers.
 * @a: The first integer
 * @b: The second integer
 * Return: no return
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
