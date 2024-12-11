class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*ans = new ListNode();
        ListNode*now = ans; //模仿前兩周寫法
        int carry=0; //進位的小數字
        while(l1 != nullptr || l2 != nullptr){ //只針對其中一個list1
            if(l1==nullptr){ //如果l1是空的，下面要移掉l1
                int here =l2->val+carry; //移掉l1剩下l2
                now->next = new ListNode(here%10); //建新node
                carry = here/10;
                l2 = l2->next; //移掉l1剩下l2
                now = now->next; //下一筆
            }else if(l2==nullptr){ //如果l2是空的，下面要移掉l2
                int here =l1->val+carry; //移掉l2剩下l1
                now->next = new ListNode(here%10); //建新node
                carry = here/10;
                l1 = l1->next; //移掉l2剩下l1
                now = now->next; //下一筆
            }else{ //照舊
                int here = l1->val+l2->val+carry;
                now->next = new ListNode(here%10); //建新node
                carry = here/10;
                l1 = l1->next; //下一筆
                l2 = l2->next; //下一筆
                now = now->next; //下一筆
            }
        }
        if(carry==1) now->next = new ListNode(carry);
        return ans->next; //等一下要return ans->next
    }
};