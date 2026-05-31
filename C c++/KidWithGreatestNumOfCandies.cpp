#include <iostream>
#include <vector>
#include <algorithm> // Hint: std::max_element could be useful here

class Solution {
public:
    std::vector<bool> kidsWithCandies(std::vector<int>& candies, int extraCandies) {
        // Your code goes here
        
        return {};
    }
};

// Helper function to print boolean vectors cleanly
void printBoolVector(const std::vector<bool>& vec) {
    std::cout << "[";
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << (vec[i] ? "true" : "false");
        if (i < vec.size() - 1) std::cout << ", ";
    }
    std::cout << "]" << std::endl;
}

int main() {
    Solution solution;

    // Test Case 1
    std::vector<int> candies1 = {2, 3, 5, 1, 3};
    int extra1 = 3;
    std::cout << "Test 1: ";
    printBoolVector(solution.kidsWithCandies(candies1, extra1));
    std::cout << "Expected: [true, true, true, false, true]\n\n";

    // Test Case 2
    std::vector<int> candies2 = {4, 2, 1, 1, 2};
    int extra2 = 1;
    std::cout << "Test 2: ";
    printBoolVector(solution.kidsWithCandies(candies2, extra2));
    std::cout << "Expected: [true, false, false, false, false]\n\n";

    // Test Case 3
    std::vector<int> candies3 = {12, 1, 12};
    int extra3 = 10;
    std::cout << "Test 3: ";
    printBoolVector(solution.kidsWithCandies(candies3, extra3));
    std::cout << "Expected: [true, false, true]\n";

    return 0;
}