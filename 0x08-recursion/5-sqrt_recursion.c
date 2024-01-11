#include "main.h"

/**
 * _sqrt_recursion - This is my my_sqrt_recursion
 *                     function about the square root
 * @n: num to get its sqrt
 *@root: root
 * Return: This is the result
 */
int _sqrt_recursion(int n, int root)
{
	if (root * root > n)
	{
		return (-1);
	}
	else if (root * root == n)
	{
		return (root);
	}
	return (_sqrt_recursion(n, root + 1));

}
