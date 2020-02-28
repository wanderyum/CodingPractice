#ifndef LISTNODE_H
#define LISTNODE_H
#include<iostream>
class ListNode{
public:
    ElementType val;
    ListNode *next;

    ListNode();
    ListNode(ElementType val);
    ~ListNode();

    void display();
};

ListNode *createListNodes(int n, ElementType arr[]);

#endif