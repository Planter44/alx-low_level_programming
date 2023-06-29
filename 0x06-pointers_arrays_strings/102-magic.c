#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;
  /*
   * -Not allowed to use a.
   * -Not allowed to modify p.
   * -One statement only.
   * - Not allowed to code anything else than this line of code.
   */

  *(p + 5) = 98;

  /* ...This will print 98\n */

  printf("a[2] = %d\n", a[2]);
  return (0);
}
