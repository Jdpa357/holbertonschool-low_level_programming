/* print_alphabet - Prints alphabet in one line
 * print_alphabet_x10 - Prints alphabet in 10 different lines
 * _islower - Returns 1 if is a lowercase character or 0 if is not
 */
void print_alphabet(void)
{
  char alpha;
  int result;

  for (alpha = 'a'; alpha <= 'z'; alpha++)
    {
      putchar(alpha);
      result += result + alpha;
    }
  putchar('\n');

  return;
}

void print_alphabet_x10(void)
{
  char alpha;
  int result, i;

  for (i = 0; i < 10; i++)
    {
      for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
	  putchar(alpha);
	  result += result + alpha;
	}
      putchar('\n');
    }

  return;
}

int _islower(int c)
{
  int result;
  result = islower(c);
  if (result > 0)
    {
      result = 1;
      return result;
    }
  else
    result = 0;
  return result;
}
