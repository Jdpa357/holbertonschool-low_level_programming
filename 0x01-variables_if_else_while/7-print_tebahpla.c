#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
  char alpha;

  for(alpha = 'z'; alpha >= 'a'; alpha--)
    {
      putchar(alpha);
    }
  putchar('\n');
  return (0);
}