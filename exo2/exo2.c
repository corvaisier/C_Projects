#include <stdio.h>

int main(void)
{
  int integer = 2;
  float floatvar = 3.1;
  char string[] = "Hello, World!";

  printf("%d est un entier\n", integer);
  printf("%f est un décimal\n", floatvar);
  printf("%s est un texte\n", string);

  return 0;
}