#include <stdio.h>

main()
{
  int x =27, y = 18, z, gcd();

  z = gcd(x,y);

  printf("gcd(%d,%d) = %d\n", x, y, z);

}

int gcd(a, b)
  int a,b;
{
  int c;
  if(b == 0) return (a);
  c = gcd(b,a%b);
  return (c);
}
