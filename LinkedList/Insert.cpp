// In this we gonna insert and delete a node in a linked list

#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node(int val){ //// use of a constructor to ease the node creation process
        data = val;
        next = NULL;
    }
};

void printLinkedList(Node* n){
    while (n != NULL){
        cout<<n->data<<endl;
        n = n->next;
    }
}

void push(Node** head, Node* zero, int data ){
    zero = new Node(data);

    zero->next = (*head);

    (*head) = zero;
    
    // printLinkedList(head);

}

void insterAfter(Node* prevNode, int data){
    Node* new_node = new Node(data);
    if(prevNode == NULL){
        cout<<"previous node cannot be Null"<<endl;
    }
    else{
        new_node->next = prevNode->next;
        prevNode->next = new_node;
    }

}

void append(Node** head, int data){
    Node* newNode = new Node(data);
    if(*head != NULL){
        
        Node* n = *head;
        
        while (n->next != NULL)
        {
            n = n->next;
        }

        n->next = newNode;
        newNode->next = NULL;
    }
    else{
        *head = newNode;
    }
    

    
}

// int main(){
//     Node* head = NULL;
//     // Node* second = NULL;
//     // Node* third = NULL;

//     // head = new Node();
//     // second = new Node();
//     // third = new Node();

//     // head->data = 0;
//     // head->next = second;

//     // second->data = 1;
//     // second->next = third;

//     // third->data = 2;
//     // third->next = NULL;

//     // int data1 = 100;
//     // Node* zero;
//     // push(&head,zero,data1);    
//     // Node* fourth;
//     // int data2 = 200;
//     // insterAfter(head,data2);

//     int data3 = 500;
//     append(&head,data3);

//     printLinkedList(head);

// }