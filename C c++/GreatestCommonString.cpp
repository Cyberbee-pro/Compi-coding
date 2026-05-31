#include <iostream>
#include <string>
#include <algorithm>
#include <numeric> // Hint: useful if you plan to use std::gcd later

class Solution {
public:
    std::string gcdOfStrings(std::string str1, std::string str2) {
        // Your code goes here
        int Len1=0;
        std::string comStr1 = str1+str2 ,comStr2 = str2+str1,gcdStr = "";
        if(comStr1 == comStr2){
            Len1 = std::gcd(str1.length(),str2.length());
            gcdStr = str1.substr(0, Len1);
        }

        return gcdStr;
    }
};

int main() {
    Solution solution;

    // Test Case 1
    std::string s1_1 = "ABCABC", s1_2 = "ABC";
    std::cout << "Test 1: " << solution.gcdOfStrings(s1_1, s1_2) 
              << " | Expected: \"ABC\"" << std::endl;

    // Test Case 2
    std::string s2_1 = "ABABAB", s2_2 = "ABAB";
    std::cout << "Test 2: " << solution.gcdOfStrings(s2_1, s2_2) 
              << " | Expected: \"AB\"" << std::endl;

    // Test Case 3
    std::string s3_1 = "LEET", s3_2 = "CODE";
    std::cout << "Test 3: \"" << solution.gcdOfStrings(s3_1, s3_2) 
              << "\" | Expected: \"\"" << std::endl;

    // Test Case 4
    std::string s4_1 = "AAAAAB", s4_2 = "AAA";
    std::cout << "Test 4: \"" << solution.gcdOfStrings(s4_1, s4_2) 
              << "\" | Expected: \"\"" << std::endl;

    return 0;
}