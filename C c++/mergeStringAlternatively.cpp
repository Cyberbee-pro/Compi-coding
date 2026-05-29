#include <iostream>
#include <string>

class Solution {
public:
    std::string mergeAlternately(std::string word1, std::string word2) {
        // Your code goes here
        int i=0;
        std::string newWord,l1,l2;
        newWord.reserve(word1.length()+word2.length());
        while(i< word1.length()||i< word2.length()){
            if(i< word1.length()){
                newWord += word1[i];
            }
            if(i < word2.length()){
                newWord += word2[i];
            }
            i++;
        }
        return newWord;
    }
};

int main() {
    Solution solution;
    
    // Test Case 1
    std::string word1 = "abc";
    std::string word2 = "pqr";
    std::cout << "Result 1: " << solution.mergeAlternately(word1, word2) << " (Expected: apbqcr)" << std::endl;

    // Test Case 2
    std::string word3 = "ab";
    std::string word4 = "pqrs";
    std::cout << "Result 2: " << solution.mergeAlternately(word3, word4) << " (Expected: apbqrs)" << std::endl;

    return 0;
}