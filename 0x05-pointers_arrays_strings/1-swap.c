/**
 * swap_int - Function that swaps the values of two integers by dereferencing
 * @*a: First value to be processed
 * @*b: Second value to be processed
 * Return: No return (Void function)  
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
	return;

}
