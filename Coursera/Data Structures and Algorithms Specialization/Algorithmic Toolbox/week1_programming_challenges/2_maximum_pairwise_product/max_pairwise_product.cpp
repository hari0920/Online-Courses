#include <iostream>
#include <vector>
#include <algorithm>


int MaxPairwiseProduct(const std::vector<int>& numbers) {
    int n = numbers.size();
    std::vector<int> num_sorted=numbers;
    std::sort(num_sorted.begin(),num_sorted.end());
    return num_sorted[n-1]*num_sorted[n-2];
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    int result = MaxPairwiseProduct(numbers);
    std::cout << result << "\n";
    return 0;
}
