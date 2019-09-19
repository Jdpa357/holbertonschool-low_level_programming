#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
  char alpha;

  for(alpha = 'a'; alpha <= 'z'; alpha++)
    {
      if(alpha != 'q' && alpha != 'e')
	{
	  putchar(alpha);
	}
    }
  putchar('\n');
  return (0);
}
