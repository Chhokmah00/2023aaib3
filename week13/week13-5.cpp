
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode*ans=new ListNode(); //準備好新的ListNode()
        ListNode*now=ans; //現在需要處理的ListNode是ans往下走
        while(list1 != nullptr || list2 != nullptr){ //只要還有一個有值
            if(list1==nullptr){ //list1是空的
                now->next=list2; //就接上list2
                list2=nullptr; //list2也清空
            }else if(list2==nullptr){ //list2也是空的
                now->next=list1; //就接上list1
                list1=nullptr; //list1就清空
            }else{
                if(list1->val < list2->val){ //左邊list1小
                    now->next=new ListNode(list1->val);
                    list1=list1->next;
                }else{ //list2小
                    now->next=new ListNode(list2->val);
                    list2=list2->next;
                }
                now=now->next;
            }
        }
        return ans->next;
    }
};

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