//Author: Hariharan Ramshankar
#include <iostream>
#include <cassert>
long long lcm_naive(int a, int b)
{
  for (long l = 1; l <= (long long)a * b; ++l)
    if (l % a == 0 && l % b == 0)
      return l;

  return (long long)a * b;
}

long long int gcd_fast(int a, int b)
{
  //Euclidean Algorithm gcd(a,b)=gcd(a%b,b)
  if (b == 0)
  {
    return a;
  }
  return gcd_fast(b, a % b);
}

long long int lcm_fast(int a, int b)
{
  //Note: a*b= gcd*lcm
  return a * (b / gcd_fast(a, b));
}

void test_solution()
{
  assert(lcm_naive(6, 8) == 24);
  assert(lcm_fast(6, 8) == 24);
  assert(lcm_fast(28851538, 1183019) == 1933053046);
}
int main()
{
  int a, b;
  std::cin >> a >> b;
  //std::cout << lcm_naive(a, b) << std::endl;
  //test_solution();
  std::cout << lcm_fast(a, b) << std::endl;
  return 0;
}