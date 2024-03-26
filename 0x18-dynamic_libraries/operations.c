int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int mod(int a, int b);
/**
 * add - addition
 * @a: first input
 * @b: second input
 * Return: sum
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtraction
 * @a: first input
 * @b: second input
 * Return: subtracted result
 */
int sub(int a, int b)
{
	return (a - b);
}
/**
 * mul - multiplication
 * @a: int input
 * @b: int input
 * Return: muliplication result
 */
int mul(int a, int b)
{
	return (a * b);
}
/**
 * div - division
 * @a: int input
 * @b: int input
 * Return: division result
 */
int div(int a, int b)
{
	return (a / b);
}
/**
 * mod - finds the modulus of two intigers
 * @a: int input
 * @b: int input
 * Return: mod result
 */
int mod(int a, int b)
{
	return (a % b);
}
