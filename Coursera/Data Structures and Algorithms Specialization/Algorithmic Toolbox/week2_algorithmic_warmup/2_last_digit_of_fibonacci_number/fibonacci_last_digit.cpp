//Author: Hariharan Ramshankar
#include <iostream>
#include <cassert>
#include <vector>
// The following code calls a naive algorithm for computing a Fibonacci number.
//
// What to do:
// 1. Compile the following code and run it on an input "40" to check that it is slow.
//    You may also want to submit it to the grader to ensure that it gets the "time limit exceeded" message.
// 2. Implement the fibonacci_fast procedure.
// 3. Remove the line that prints the result of the naive algorithm, comment the lines reading the input,
//    uncomment the line with a call to test_solution, compile the program, and run it.
//    This will ensure that your efficient algorithm returns the same as the naive one for small values of n.
// 4. If test_solution() reveals a bug in your implementation, debug it, fix it, and repeat step 3.
// 5. Remove the call to test_solution, uncomment the line with a call to fibonacci_fast (and the lines reading the input),
//    and submit it to the grader.

int fibonacci_last_naive(int n)
{
    // write your code here
    std::vector<long long int> Num(2);
    Num[0] = 0;
    Num[1] = 1;
    if (n < 2)
    {
        return (Num[n]%10);
    }
    else
    {
        long long int temp = 0;
        for (long long int i = 2; i <= n; i++)
        {
            temp = Num[0] + Num[1];
            Num[0] = Num[1];
            Num[1] = temp;
        }
        return (temp%10);
    }
}

int fibonacci_last_fast(int n)
{
    // write your code here
    std::vector<long long int> Num(2);
    Num[0] = 0;
    Num[1] = 1;
    if (n < 2)
    {
        return (Num[n]%10);
    }
    else
    {
        long long int temp = 0;
        for (long long int i = 2; i <= n; i++)
        {
            temp = (Num[0] + Num[1])%10;
            Num[0] = Num[1];
            Num[1] = temp;
        }
        return temp;
    }
}

void test_solution()
{
    assert(fibonacci_last_naive(3) == 2);
    assert(fibonacci_last_fast(331) == 9);
    for (int n = 0; n < 20; ++n)
        assert(fibonacci_last_fast(n) == fibonacci_last_naive(n));
}

int main()
{
    int n = 0;
    std::cin >> n;
    //std::cout << fibonacci_naive(n) << '\n';
    //test_solution();
    std::cout << fibonacci_last_fast(n) << '\n';
    return 0;
}