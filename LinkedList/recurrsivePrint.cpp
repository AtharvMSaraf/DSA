#include <iostream>
#include "Insert.cpp"

using namespace std;



void printll(Node* head){
    if(head == NULL){
        return;
    }
    cout<<head->data<<endl;
    printll(head->next);
}

int main(){
    Node* head = new Node(0);
    append(&head,100);
    append(&head,200);
    append(&head,300);
    append(&head,400);

    printll(head);


}