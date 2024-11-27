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
        ListNode* ans = new ListNode(); //空包彈
        ListNode* now = ans; //答案放在now裡面
        while(list1 != nullptr || list2 != nullptr){ //任何一邊有資料就繼續做
            if(list1==nullptr){ //有一個是空的
                now->next =list2; //另外一個全部都上
                list2 = nullptr; //清空
            }else if(list2==nullptr){ //有一個是空的
                now->next =list1; //另外一個全部都上
                list1 = nullptr; //清空
            }else if(list1->val < list2->val){ //list1是小的
                now->next = new ListNode(list1->val); //答案放在now的下一筆，放小的
                list1 = list1->next; //list1換下一筆
                now = now->next; //現在也換下一筆
            }else{ //list2是小的
                now->next = new ListNode(list2->val); //答案放在now的下一筆，放小的
                list2 = list2->next; //list2換下一筆
                now = now->next; //現在也換下一筆
            }
        }
        return ans->next;
    }
};