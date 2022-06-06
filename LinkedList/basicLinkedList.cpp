# include <iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

void printLinkedList(Node* n){
    while (n != NULL){
        cout<<n->data<<endl;
        n = n->next;
    }

    // cout<<"i did enter the print functio"<<endl;
}

int main(){
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 0;
    head->next = second;

    second->data = 1;
    second->next = third;

    third->data = 2;
    third->next = NULL;

    printLinkedList(head);
}