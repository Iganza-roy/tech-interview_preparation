#include "prep.h"

/**
 * Definition for singly-linked list.
 * addTwoNumbers - adds two numbers of a linked list
 * @l1: first list
 * @l2: second list
 */

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) 
{
    struct ListNode* dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
    dummy->val = 0;
    dummy->next = NULL;

    struct ListNode* temp = dummy;
    int carry = 0;

    while(l1 || l2 || carry)
    {
        int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
        carry = sum / 10;

        struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
        newNode->val = sum % 10;
        newNode->next = NULL;

        temp->next = newNode;
        temp = temp->next;

        if (l1) l1 = l1->next;
        if (l2) l2 = l2->next;
    }

    return dummy->next;
}