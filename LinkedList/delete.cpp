#include <iostream>
#include "Insert.cpp"

using namespace std;


void DeleteIteratively(Node** head, int key){
    if (*head == NULL) {
        cout << "Element not present in the list\n";
        return;
    }
    Node* itr = *head;
    while (itr->next->data != key)
    {
        itr = itr->next;
    }
    itr->next = itr->next->next;

}

int main(){
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;
    Node* fourth;

    head = new Node(0);
    second = new Node(1);
    third = new Node(2);
    fourth = new Node(3);

    head->next = second;

    second->next = third;

    third->next = fourth;

    fourth->next = NULL;

    int key = 2;
    DeleteIteratively(&head, key);

    printLinkedList(head);

}