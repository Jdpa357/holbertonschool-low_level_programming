/**
 * _abs - Computes the absolute value of an integer
 * @c: Value to be passed into the function to evaluate
 * Return: Absolute value of the integer passed to the function
 */
int _abs(int c)
{
	int i;

	i = (c < 0) ? (c * -1) : c;
	return (i);
}
