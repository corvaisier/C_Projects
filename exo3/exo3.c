#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  //initialize vars
  char first[20];
  char *last;

  //prompt user to input first and last name and use scanf() to store those to the initiliazed vars
  printf("Enter your first name: ");
  scanf("%19s", first);
  printf("Enter your last name: ");
  scanf("%ms", &last);

  //print the welcome message!
  printf("Hello %s %s!\n", first, last);

  free(last);

  return 0;
}