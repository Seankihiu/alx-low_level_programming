#include "main.h"


	/**
	 * add - adds two integers and returns the result
	 * @a: int to be added to b
	 * @b: int to be added to a
	 * Return: sum of a and b
	 */
	int add(int a, int b)
	{
		int c;


		c = a + b;


		return (c);
	}
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = add(89, 9);
    printf("%d\n", n);
    return (0);
