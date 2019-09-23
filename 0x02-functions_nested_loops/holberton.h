/* print_alphabet - Prints alphabet in one line
 * print_alphabet_x10 - Prints alphabet in 10 different lines
 * _islower - Returns 1 if is a lowercase character or 0 if is not
 * _isalpha - Returns 1 if character is an alphabet and 0 if its not
 * print_sign - Prints the sign of a number
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

int _isalpha(int c)
{
  int result;

  result = isalpha(c);
  if (result > 0)
    {
      return(1);
    }
  else
    {
      return(0);
    }
}

print_sign(int n)
{
  if (n > 0)
    {
      printf("+");
      return(1);
    }
  else if(n == 0)
    {
      printf("0");
      return(0);
    }
  else
    printf("-");
  return(-1);
}
