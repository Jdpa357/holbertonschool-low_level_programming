#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
  int num;

  for(num = 0; num < 10; ++num)
    {
      putchar(num+'0');
      if(num != 9){
      putchar(',');
      }
      putchar(' ');
    }
  putchar('\n');
  return (0);
}
