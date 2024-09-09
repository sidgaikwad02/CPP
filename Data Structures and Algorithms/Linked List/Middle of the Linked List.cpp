/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getLength(ListNode* head) {
        int len = 0;

        ListNode* temp = head;
        while(temp != NULL) {
            len++;
            temp = temp -> next;
        }
        return len;
    }
    ListNode* middleNode(ListNode* head) {
        // Method-> O(n)
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL) {
            // fast two step aage badegaa
            fast = fast-> next;
            if(fast != NULL) {
                fast = fast-> next;
                //Possible then only slow 1 step aage     badegaa
                slow = slow -> next;
            }
        } 
         return slow;

        // Method-> O(n)^2
        // int n = getLength(head);
        // int position  = n/2 + 1;

        // ListNode* temp = head;
        // while(position != 1) {
        //     position--;
        //     temp = temp->next;
        // }
        // return temp;
    }
};
