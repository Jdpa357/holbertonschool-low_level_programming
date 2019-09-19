#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
  char hex;
  
  for(hex = '0'; hex <= '9'; hex++)
    {
      putchar(hex);
    }
  for(hex = 'a'; hex <= 'f'; hex++)
    {
      putchar(hex);
    }
  putchar('\n');
  return (0);
}
