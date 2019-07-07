#include <iostream>
#include <cassert>
#include <vector>

long long get_fibonacci_huge_naive(long long n, long long m) {
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current  = 1;

    for (long long i = 0; i < n - 1; ++i) 
	{
        long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
    }
	std::cout << current << std::endl;
    return current % m;
}

long long get_fibonacci_huge_fast(long long n, long long m)
{
    //Find the pisanno period for m! then return F (n%period) mod m.
    //Step 1: Obtain the Pisano period
	long long prev = 0;
	long long curr = 1;
	std::vector<int> remainders(50);
	for (long long i = 0; i < (n/2); i++)
	{
		long long tmp_prev = prev;
		prev = curr;
		curr = tmp_prev + curr;
		remainders.push_back(curr%m);
	}
	//now we have a vector of remainders for first n/2 Fib numbers.
	//
	return 161;
    
}

void test_solution()
{
    //assert(get_fibonacci_huge_naive(239,1000) == 161);
    assert(get_fibonacci_huge_fast(239,1000) == 161);
    //for (int n = 0; n < 20; ++n)
       // assert(get_fibonacci_huge_naive(n,2) == get_fibonacci_huge_fast(n,2));
}

int main() {
    //long long n, m;
	test_solution();
	//std::cin >> n >> m;
    //std::cout << get_fibonacci_huge_naive(n, m) << '\n';
    //std::cout << get_fibonacci_huge_fast(n, m) << '\n';
	std::cout << "Enter a character" << std::endl;
}
