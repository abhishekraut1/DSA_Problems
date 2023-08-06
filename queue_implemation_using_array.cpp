#include<bits/stdc++.h>
using namespace std;
// simple implemantation
// deqeque() --> operation O(n)
class Queue{
    private:
        int *arr;
        int size;
        int cap;
    public:
        Queue(int c)
        {
            cap=c;
            size=0;
            arr = new int[cap];
  
      }
       void enqueue(int x)
       {
        if(isFull()) return;
        arr[size]=x;
        size++;
       }

       void dequeue()
       {
        if(isEmpty()) return;
        int i=0;
        for(i=0;i<size-1;i++)
        {
            arr[i]=arr[i+1];
        }
        arr[i]=0;
        size--;
       }

       int getFront(){
        if(isEmpty())
        return -1;
        return arr[0];
       }

       int getRear()
       {
        if(isEmpty())
        return -1;
        return arr[size-1];
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
        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
       }

};
int main() {
    Queue q(3);
    q.enqueue(78);
    q.enqueue(90);
    q.enqueue(34);

    q.dequeue();

    cout<<q.getFront()<<endl;

    q.printQueue();

    q.enqueue(100);

    cout<<q.getRear()<<endl;

return 0;
}