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
        int d1=0,d2=0,fd=0,carry=0,count=0;
        ListNode* l3 = new ListNode ; 
        ListNode* head =l3;
            while(nullptr != l1 || nullptr != l2 || carry>0){
                if(nullptr != l1){
                    d1 = l1->val;
                    l1 = l1->next;
                }else{
                    d1 = 0;
                }
                if(nullptr!= l2){
                    d2 = l2->val;
                    l2 = l2->next;
                }else{
                    d2 = 0;
                }
                fd= d1 + d2 + carry;
                l3->val= fd%10;
                carry = fd/10;
                if(nullptr != l1 || nullptr != l2 || carry>0){
                l3->next = new ListNode();
                }
                l3 = l3->next;
                count++;
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
    ListNode* l1 = new ListNode(2, new ListNode(4, new ListNode(3,new ListNode(9))));
    // l2 = 5 -> 6 -> 4 (465)
    ListNode* l2 = new ListNode(5, new ListNode(6, new ListNode(4)));

    // Run your implementation
    ListNode* result = solution.addTwoNumbers(l1, l2);

    // Print result (Should be 7 -> 0 -> 8 for the test case above)
    std::cout << "Result: ";
    printList(result);

    return 0;
}
