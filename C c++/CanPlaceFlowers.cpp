#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
     bool canPlaceFlowers(vector<int> &flowerbed, int n)
     {
          // Your logic goes here
          int noOf0s = 0,rem = 0,noOfAd0s = 0;
          vector<int> Ad0s;
          bool isAppplicable = false;
          rem = n;
          for (int i = 0; i < flowerbed.size(); i++)
          {
               if (flowerbed[i] == 0)
               {
                    noOf0s++;
                    if(i!= 0 && flowerbed[i] == 0 && flowerbed[i-1] == 0){
                      noOfAd0s++;
                    }
               }else if(flowerbed[i] == 1 && noOfAd0s!=0){
                      Ad0s.push_back(noOfAd0s);
                      noOfAd0s=0;
                }

          }


          if(flowerbed[0] == 0 && flowerbed[1] == 0 && rem!=0 && flowerbed.size() > 1){
            rem--;
          }else if(flowerbed[flowerbed.size() - 1] == 0 && flowerbed[flowerbed.size() - 2] == 0 && rem!= 0 && flowerbed.size() > 1){
            rem--;            
          }else if(noOf0s - rem >= (rem+1)){
            isAppplicable = true;
            rem = 0;
          }

          if(rem == 0){
            isAppplicable = true;
          }

          // if (n == 1)
          // {
          //      if (noOf0s >= 3)
          //      {
          //           isAppplicable = true;
          //      }
          // }
          // else if (noOf0s - n >= (n + 1))
          // {
          //   {
            //   if(flowerbed[0] && rem>=1){
            //
            //   }
            // }
            //    isAppplicable = true;
          //}
          return isAppplicable;
     }
};

int main()
{
     Solution solution;

     // Example 1 (From problem description)
     vector<int> flowerbed1 = {1, 0, 0, 0, 1};
     int n1 = 1;
     cout << "Test 1 Output: "
          << (solution.canPlaceFlowers(flowerbed1, n1) ? "true" : "false")
          << " (Expected: true)" << endl;

     // Example 2 (From problem description)
     vector<int> flowerbed2 = {1, 0, 0, 0, 1};
     int n2 = 2;
     cout << "Test 2 Output: "
          << (solution.canPlaceFlowers(flowerbed2, n2) ? "true" : "false")
          << " (Expected: false)" << endl;

     // Test 3: Planting at the very beginning
     vector<int> flowerbed3 = {0, 0, 1, 0, 1};
     int n3 = 1;
     cout << "Test 3 Output: "
          << (solution.canPlaceFlowers(flowerbed3, n3) ? "true" : "false")
          << " (Expected: true)" << endl;

     // Test 4: Planting at the very end
     vector<int> flowerbed4 = {1, 0, 1, 0, 0};
     int n4 = 1;
     cout << "Test 4 Output: "
          << (solution.canPlaceFlowers(flowerbed4, n4) ? "true" : "false")
          << " (Expected: true)" << endl;

     // Test 5: All zeros, requires maximum possible planting
     vector<int> flowerbed5 = {0, 0, 0, 0, 0};
     int n5 = 3;
     cout << "Test 5 Output: "
          << (solution.canPlaceFlowers(flowerbed5, n5) ? "true" : "false")
          << " (Expected: true)" << endl;

     // Test 6: Array of size 1, empty
     vector<int> flowerbed6 = {0};
     int n6 = 1;
     cout << "Test 6 Output: "
          << (solution.canPlaceFlowers(flowerbed6, n6) ? "true" : "false")
          << " (Expected: true)" << endl;

     // Test 7: Array of size 1, filled
     vector<int> flowerbed7 = {1};
     int n7 = 1;
     cout << "Test 7 Output: "
          << (solution.canPlaceFlowers(flowerbed7, n7) ? "true" : "false")
          << " (Expected: false)" << endl;

     // Test 8: Planting 0 flowers is always possible
     vector<int> flowerbed8 = {1, 0, 1, 0, 1};
     int n8 = 0;
     cout << "Test 8 Output: "
          << (solution.canPlaceFlowers(flowerbed8, n8) ? "true" : "false")
          << " (Expected: true)" << endl;

     // Test 9: Lots of small gaps
     vector<int> flowerbed9 = {0, 1, 0, 1, 0, 1, 0, 0};
     int n9 = 1;
     cout << "Test 9 Output: "
          << (solution.canPlaceFlowers(flowerbed9, n9) ? "true" : "false")
          << " (Expected: true)" << endl;

     return 0;
}
