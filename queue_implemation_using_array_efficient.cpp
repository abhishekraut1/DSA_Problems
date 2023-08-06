#include<bits/stdc++.h>
using namespace std;
// efficent implemantation
// deqeque() --> operation O(1)
class Queue{
    private:
        int *arr;
        int front;
        int size;
        int cap;
    public:
        Queue(int c)
        {
            cap=c;
            size=0;
            front=0;
            arr = new int[cap];
  
      }
       void enqueue(int x)
       {
        if(isFull()) return;
        int rear = getRear();
        rear = (rear + 1)%cap;
        arr[rear]=x;
        size++;
       }

       void dequeue()
       {
        if(isEmpty()) return;
        arr[front]=0;
        front = (front+1)%cap;
        size--;
       }

       int getFront(){
        if(isEmpty())
        return -1;
        else
        return front;
       }

       int getRear()
       {
        if(isEmpty())
        return -1;
        else
        return (front+size-1)%cap;
       }

       int sizeOf(){
        return size;
       }

       bool isFull()
       {
        return size==cap;
       }

       bool isEmpty()
       {
        return size==0;
       }

        void printQueue()
       {
        for(int i=front;i<=getRear()%cap;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
       }
};
int main() {
    Queue q(4);
    q.enqueue(78);
    q.enqueue(90);
    q.enqueue(34);

    q.printQueue();

    q.dequeue();

    cout<<q.getFront()<<endl;


    q.enqueue(100);

    q.printQueue();

    cout<<q.getRear()<<endl;

return 0;
}