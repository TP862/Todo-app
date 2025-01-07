#include <stdlib.h>
#include <stdio.h>

int main(void)
{
  char test[255];

  fgets(test, 255 , stdin);

  printf("%s",test);

  return 0;
}
