#include "main.h"

/**
 * _sqrt_recursion - This is my my_sqrt_recursion
 *                     function about the square root
 * @n: num to get its sqrt
 *@root: root
 * Return: This is the result
 */
int my _sqrt_recursion(int n, int root)
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

/**
 * _sqrt_recursion - This is my first function
 * @n: This is my value
 *
 * Return: This is my result of the function my_sqrt_recursion
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (my_sqrt_recursion(n, 0));
}
