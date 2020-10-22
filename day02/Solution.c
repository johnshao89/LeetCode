/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode* head=NULL, *current=NULL;
    int carry = 0;
    while(l1!=NULL ||l2!=NULL){
        int l1_val = l1==NULL?0:l1->val;
        int l2_val = l2==NULL?0:l2->val;
        int sumValue = l1_val+l2_val+carry;
        if(head==NULL){
            head = current = (struct ListNode*)malloc(sizeof(struct ListNode));
            current->val = sumValue%10;
            current->next = NULL;
        }else{
            struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
            newNode->val = sumValue%10;
            newNode->next = NULL;
            current->next = newNode;
            current = current->next;
        }
        carry = sumValue/10;
        l1 = l1==NULL?l1:l1->next;
        l2 = l2==NULL?l2:l2->next;
    }
    if(carry>0){
            struct ListNode* temp = (struct ListNode*)malloc(sizeof(struct ListNode));
            temp->val = carry;
            temp->next = NULL;
            current->next = temp;
    }
    return head;
}