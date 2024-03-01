#include "llrec.h"

//*********************************************
// Provide your implementation of llpivot below
//*********************************************


void llpivot (Node*& head, Node*& smaller, Node*& larger, int pivot);

void llpivot (Node*& head, Node*& smaller, Node*& larger, int pivot)
{
    if (head == nullptr) {
        smaller = nullptr;
        larger = nullptr;
        return; 
    }

    llpivot(head->next, smaller, larger, pivot);

    if(head->val <= pivot) {
        Node* temp = smaller;
        smaller = head;
        smaller->next = temp;
    } else {
        Node* temp = larger;
        larger = head;
        larger->next = temp;
    }

    head = nullptr;
    return;

}
