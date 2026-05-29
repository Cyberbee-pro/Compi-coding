#include<iostream>

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // Your code goes here
        int num1=0,num2=0,result;
        ListNode* l3 = new ListNode(); 
        ListNode* head =l3;
          for(int i=ListSize(l1);i!=0;i--){
            num1*=10;
            num1+=l1->val;
            l1 = l1->next;
          }

          for(int i=ListSize(l2);i!=0;i--){
            num2*=10;
            num2+=l2->val;
            l2 = l2->next;
          }
          result=num1+num2;
          // std::cout<<num1<<" + "<<num2<<" = "<<result<<std::endl;
        
          l3->val = result%10;
          result /=10;
          for(int i=0;result!=0;i++){
            // std::cout<<l3->val<<std::endl;
            // std::cout<<result<<std::endl;
            l3->next = new ListNode(result%10);
            l3 = l3->next; 
            result /=10;  
          }

return head;
    }

    int ListSize(ListNode* l){
      int count=0;
      while(l!=nullptr){
        count++;
        l=l->next;
      }
      return count--;
    }


};

// Simple helper function to print your list and check your work
void printList(ListNode* head) {
    while (head != nullptr) {
        std::cout << head->val;
        if (head->next != nullptr) std::cout << " -> ";
        head = head->next;
    }
    std::cout << std::endl;
}

int main() {
    Solution solution;

    // Test case setup: 
    // l1 = 2 -> 4 -> 3 (342)
    ListNode* l1 = new ListNode(2, new ListNode(4, new ListNode(3)));
    // l2 = 5 -> 6 -> 4 (465)
    ListNode* l2 = new ListNode(5, new ListNode(6, new ListNode(4)));

    // Run your implementation
    ListNode* result = solution.addTwoNumbers(l1, l2);

    // Print result (Should be 7 -> 0 -> 8 for the test case above)
    std::cout << "Result: ";
    printList(result);

    return 0;
}
