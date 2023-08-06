#include<bits/stdc++.h>
using namespace std;
// simple circular singly linked list implementation
struct Node{
    int data;
    Node *next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
/////////////////////////////
void printList(Node *head)
{ // Here head is the copy of head pointer of main function
    Node *curr = head; 

    cout<<curr->data<<endl;
        curr = curr->next;
    while(curr != NULL && curr != head){
        cout<<curr->data<<endl;
        curr = curr->next;
    }
}

int main() {
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = head;

    printList(head);
return 0;
}