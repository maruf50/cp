
#include <bits/stdc++.h>
using namespace std;


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
        int a = 0;
        ListNode* cur1;
        cur1 = l1;
        while (cur1) {
            int x = cur1->val;
            a = a * 10 + x;
            cur1 = cur1->next;
        }

        int b = 0;
        ListNode* cur2;
        cur2 = l2;
        while (cur2) {
            int y = cur2->val;
            b = b * 10 + y;
            cur2 = cur2->next;
        }
        int c = a + b;

        ListNode* head = nullptr;
        int z = c % 10;
        c = c / 10;
        head->val = z;
        head->next = nullptr;

        while (c > 0) {
            z = c % 10;
            c = c / 10;
            ListNode *p = new ListNode(z);
            p->next = nullptr;
            head = p;
        }

        return head;
    }
};

int main(){

    
    Solution sol = new Solution(l1,l2);



}