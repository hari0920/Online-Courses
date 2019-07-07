//Author: Hariharan Ramshankar
#include <iostream>
#include <cassert>

int gcd_naive(int a, int b) {
  int current_gcd = 1;
  for (int d = 2; d <= a && d <= b; d++) {
    if (a % d == 0 && b % d == 0) {
      if (d > current_gcd) {
        current_gcd = d;
      }
    }
  }
  return current_gcd;
}

int gcd_fast(int a,int b){
  //Euclidean Algorithm gcd(a,b)=gcd(a%b,b)
  if(b==0)
  {
    return a;
  }
  return gcd_fast(b,a%b);
}

void test_solution()
{
  assert(gcd_naive(18,35) == 1);
  assert(gcd_fast(18,35) == 1);
  assert(gcd_fast(28851538, 1183019) == 17657);
}
int main() {
  int a, b;
  std::cin >> a >> b;
  //test_solution();
  std::cout << gcd_fast(a, b) << std::endl;
  return 0;
}
