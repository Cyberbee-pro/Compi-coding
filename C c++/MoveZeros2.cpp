
//TODO


#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    void moveZeroes(std::vector<int>& nums) {
        // Your code goes here
        int i=0,count=0,VecSize=0;
        VecSize = nums.size();
        while(i<VecSize){
            if(0==nums[i]&& i!=VecSize){
                count++;
                std::copy(nums.begin() + (i+1),nums.end(),nums.begin() +i);
                VecSize--;
                i=0;
                continue;
            }
            i++;
        }
        i = nums.size() -1;
        while (0<count)
        {
            nums[i] = 0;
            count--;
            i--;
        }
        
    }
};

// Helper function to print vectors and check your work
void printVector(const std::vector<int>& nums) {
    std::cout << "[";
    for (size_t i = 0; i < nums.size(); ++i) {
        std::cout << nums[i];
        if (i < nums.size() - 1) std::cout << ", ";
    }
    std::cout << "]" << std::endl;
}

int main() {
    Solution solution;

    // Test Case 1
    std::vector<int> nums1 = {0, 1, 0, 3, 12};
    std::cout << "Before 1: ";
    printVector(nums1);
    
    solution.moveZeroes(nums1);
    
    std::cout << "After 1:  ";
    printVector(nums1); // Expected: [1, 3, 12, 0, 0]
    std::cout << "----------------------" << std::endl;

    // Test Case 2
    std::vector<int> nums2 = {0};
    std::cout << "Before 2: ";
    printVector(nums2);
    
    solution.moveZeroes(nums2);
    
    std::cout << "After 2:  ";
    printVector(nums2); // Expected: [0]

    return 0;
}