#include<bits/stdc++.h>
using namespace std;
// simple doubly linked list implementation
struct Node{
    int data;
    Node *next;
    Node *prev;

    Node(int x){
        data = x;
        prev = NULL;
        next = NULL;
    }
};

////////////////////
void printDLL(Node *head){
    Node *curr = head;

    while(curr != NULL){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
    
}
////////////////////
Node *insertBegin(Node *head,int data){
    Node *temp = new Node(data);
    temp->next = head;

    if(head == NULL) return temp;
    
    head->prev = temp;

    return temp;
}
////////////////////
Node *reverseDLL(Node *head){
    if(head == NULL || head->next == NULL) return head;

    Node *curr = head;
    Node *newHead;
    while(curr != NULL){
        Node *nxt = curr->next;
        curr->next = curr->prev;
        curr->prev = nxt;
        newHead = curr;

        curr = curr->prev;
    }
    return newHead;
}
////////////////////
Node *deleteHead(Node *head){
    if(head == NULL) return NULL;    
    
    if(head->next == NULL){
        delete(head);
        return NULL;
    }
    
    Node *temp = head;
    head = head->next;
    head->prev = NULL;
    delete(temp);

    return head;
}
////////////////////
Node *deleteTail(Node *head){
    if(head == NULL) return NULL;

    if(head->next == NULL){
        delete head;
        return NULL;
    }

    Node *curr = head;
    while(curr->next != NULL){
        curr = curr->next;
    }
    curr->prev->next = NULL;
    delete curr;

    return head;
}
////////////////////
Node *insertAtEnd(Node *head,int data){
    Node *temp = new Node(data);

    if(head == NULL) return temp;

    Node *curr = head;
    while(curr->next != NULL){
        curr = curr->next;
    }
    curr->next = temp;
    temp->prev = curr;

    return head;
}

int main() {
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);

    head->next = temp1;
    temp1->prev = head;

    temp1->next = temp2;
    temp2->prev = temp1;

    // head = insertBegin(head,78);

    // head = reverseDLL(head);

    // head = deleteHead(head);

    // head = deleteTail(head);

    head = insertAtEnd(head,88);
    printDLL(head);

return 0;
}