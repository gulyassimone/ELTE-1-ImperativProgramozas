#include <stdio.h>
#include <stdlib.h>

int main()
{
  int C;

  C = getc(stdin);

  while(!feof(stdin))
  {
    putc(C, stdout);
    C = getc(stdin);
  }

  return 0;
}
