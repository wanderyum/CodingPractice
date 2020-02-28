#include<iostream>
typedef int ElementType;
#include"listnode.h"
#include"listnode.cpp"


int main(){
    int arr[] = {1,2,3};
    ListNode *lp = createListNodes(3, arr);
    lp->display();
    delete lp;
    return 0;
}