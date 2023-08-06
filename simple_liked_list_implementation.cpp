#include<bits/stdc++.h>
using namespace std;
// simple linked list implementation
struct Node
{
    Node *next;
    int data;

    Node(int x){
        data = x;
        next = NULL;
    }
};

/////////////////////////////
void printList(Node *head)
{ // Here head is the copy of head pointer of main function
    Node *curr = head; 
    while(curr != NULL) 
    {
        cout<<curr->data<<endl;
        curr = curr->next;
    }
}

void recPrint(Node *head)
{
    if(head == NULL)
    return;

    cout<<head->data<<endl;
    recPrint(head->next);
}

/////////////////////////////

Node* insertBegin(Node *head,int x)
{
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
}
/////////////////////////////
Node *insertEnd(Node *head,int x)
{
    Node *temp = new Node(x);
    if(head == NULL)
    {
        return temp;
    }

    Node *curr = head;

    while(curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;

    return head;
}
/////////////////////////////
Node *delHead(Node *head)
{
    if(head == NULL)
    return NULL;

    Node *temp = head->next;
    delete(head);
    return temp;
}
/////////////////////////////
Node *delTail(Node *head)
{
    if(head == NULL) return NULL;
    if(head->next == NULL) return NULL;

    Node *curr = head;
    while(curr->next->next != NULL)
    {
        curr = curr->next;
    }
    delete(curr->next);
    curr->next = NULL;

    return head;
}
/////////////////////////////
Node *insertAtPosition(Node *head,int position,int data){
    Node *temp = new Node(data);

    if(position == 1){
        temp->next = head;
        return temp;
    }

    Node *curr = head;
    for(int i=1;i<=position-2 && curr != NULL ;i++){
        curr = curr->next;
    }
    // for empty LL
    if(curr == NULL) head;

    temp->next = curr->next;
    curr->next = temp;

    return head;
}
/////////////////////////////
int searchLL(Node *head,int x){
    if(head == NULL) return -1;

    Node *curr = head;

    int pos=1;
    while(curr != NULL){
        if(curr->data == x)
            return pos;
        
        curr = curr->next;
        pos++;
    }

    return -1;
}

int recSearchLL(Node *head,int x){
    if(head == NULL) return -1;

    if(head->data == x)
        return 1;
    else{
        int res = recSearchLL(head->next,x);
        if(res == -1) return -1;
        else return res+1;
    }

}


int main() {
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    printList(head);
    cout<<endl;
    // recPrint(head);

    // head = insertBegin(head,89);
    // head = insertBegin(head,77);
    // head = insertBegin(head,45);

    // head = insertEnd(head,66);
    // head = insertEnd(head,555);

    // head = delHead(head);

    // head = delTail(head);

    // head = insertAtPosition(head,2,78);

    // printList(head);

    cout<<recSearchLL(head,20)<<endl;
    cout<<searchLL(head,20)<<endl;

return 0;
}