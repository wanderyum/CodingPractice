#include"listnode.h"

ListNode::ListNode(){
    this->next = NULL;
}
ListNode::ListNode(ElementType val){
    this->val = val;
    this->next = NULL;
}
ListNode::~ListNode(){
    if (this->next) delete this->next;
    std::cout << "deleting nodes, value= " << this->val << std::endl;
}
void ListNode::display(){
    ListNode *lp=this;
    std::cout << lp->val;
    while(lp->next){
        lp = lp->next;
        std::cout << "->" << lp->val;
    }
    std::cout << std::endl;
}

ListNode *createListNodes(int n, ElementType arr[]){
    if (n<1) return NULL;
    ListNode *res, *lp;
    lp = new ListNode(arr[0]);
    res = lp;
    for (int i=1; i<n; i++){
        lp->next = new ListNode(arr[i]);
        lp = lp->next;
    }
    return res;
}