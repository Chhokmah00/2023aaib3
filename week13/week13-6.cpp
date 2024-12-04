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
    ListNode* reverseList(ListNode* head) {
        vector<int> a; //用陣列存Linked list的val值
        while(head != nullptr){ //只要還有東西
            a.push_back(head->val); //就把值先塞入陣列
            head=head->next; //換下一的
        }
        ListNode*ans=new ListNode(); 
        ListNode*now=ans;
        for(int i=a.size()-1;i>=0;i--){ //反過來的陣列
            now->next=new ListNode(a[i]);
            now=now->next; //換下一的
        }
        return ans->next;
    }
};