
//   Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 

class Solution {
    public:
        ListNode* oddEvenList(ListNode* head) {
            if (!head || !head->next) return head; // Handle edge cases
    
            ListNode* odd = head;
            ListNode* even = head->next;
            ListNode* evenHead = even; // Store head of even list
    
            while (even && even->next) { // Fix loop condition
                odd->next = even->next; 
                odd = odd->next; 
    
                even->next = odd->next; 
                even = even->next;
            }
    
            odd->next = evenHead; // Connect odd and even lists
            return head;
        }
    };
    