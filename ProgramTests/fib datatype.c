#include <stdio.h>
#include <string.h>

unsigned long fib ( unsigned long n )
{
  int a;
  unsigned long b;
  long c;
  a = b = 1;
  for ( int j = 0; j != n; ++j )
  {
    c = a + b;
    a = b;
    b = c;
  }
  return c;
}

int main()
{
    int n = 20;
    int result = fib ( n );
    printf ( "%d\n", result );
    return 0;
}
