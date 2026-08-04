#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers;
    int num;
    int sum = 0;

    std::cout << "Enter 5 integers:\n";

    // Read 5 integers into the vector
    for (int i = 0; i < 5; ++i) {
        std::cin >> num;
        numbers.push_back(num);
    }

    // Calculate the sum
    for (int n : numbers) {
        sum += n;
    }
    // Print the sum

    std::cout << "The sum of the numbers is: " << sum << std::endl;

    return 0;
}
