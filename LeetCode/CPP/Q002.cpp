typedef int ElementType;
#include"../../DataStructure/ListNode/listnode.h"
#include"../../DataStructure/ListNode/listnode.cpp"
#include<iostream>
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if (!l1) return l2;
        if (!l2) return l1;
        int flag = 0;
        int sum;
        ListNode *res = new ListNode(0);
        ListNode *lp = res ;

        while (l1 || l2 || flag){
            sum = flag;
            if (l1){
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2){
                sum += l2->val;
                l2 = l2->next;
            }
            flag = sum / 10;
            lp->next = new ListNode(sum%10);
            lp = lp->next;
        }
        return res->next;
    }
};

int main(){
    int arr1[] = {5};
    int arr2[] = {5};
    ListNode *lp1 = createListNodes(sizeof(arr1)/sizeof(int), arr1);
    ListNode *lp2 = createListNodes(sizeof(arr2)/sizeof(int), arr2);
    Solution s;
    ListNode *lp3 = s.addTwoNumbers(lp1, lp2);
    lp3->display();
    return 0;
}