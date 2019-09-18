#include <stdio.h>

int main()
{
  char A = 'A';
  int B = 2;
  long int C = 34;
  long long int D = 9223372036;
  float E = 2.1416;

  printf("Size of a char: %d byte(s) \n", sizeof(A));
  printf("Size of a int: %d byte(s) \n", sizeof(B));
  printf("Size of a long int: %d byte(s) \n", sizeof(C));
  printf("Size of a long long: %d byte(s) \n", sizeof(D));
  printf("Size of a float: %d byte(s) \n", sizeof(E));
  return(0);
};
