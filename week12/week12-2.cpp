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
public: // * 代表指標，用來瞄準的準星
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        //ListNode* ans = List1; //可轉接(舊的)list1過去
        //ListNode* ans = new ListNode(99); //可以開新的
        ListNode* ans = new ListNode(99,new ListNode(90)); 
        //開心的Node裡面放99，後面轉接新的Node裡有90

        return ans;
    }
};