#include <iostream>
#include "Insert.cpp"

using namespace std;

Node* IterrativeReverse(Node* head){
    Node* prv_node = NULL;
    Node* next_node;
    Node* itr = head;
    while (itr != NULL)
    {
        next_node = itr->next;
        // cout<<next_node<<endl;
        itr->next = prv_node;
        prv_node = itr;
        itr = next_node;
        
    }
    head = prv_node;
    return head;        
}

void RecusrsiveReverse(Node* head){
    if(head->next == NULL){
        // return head;
        printLinkedList(head);
        return;
    }
    RecusrsiveReverse(head->next);
    head->next->next = head;
    head->next = NULL;
}

int main(){
    Node* head = new Node(200);
    Node* zero = new Node(1);
    push(&head,zero,100);

    append(&head,300);
    append(&head,400);

    // head = IterrativeReverse(head);

    RecusrsiveReverse(head);
    printLinkedList(head);
}