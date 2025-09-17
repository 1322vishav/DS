// Circular Queue implementation in C++
#include <iostream>
#define MAXLEN 5

using namespace std;

class Queue {
   private:
  int items[MAXLEN], front, rear;

   public:
  Queue() {
    front = -1;
    rear = -1;
  }
  // Check if the queue is full
  bool isFull() {
      if(front==rear+1 || front==0 && rear==MAXLEN-1)
        //front = (rear+1)%MAXLEN
        return true;
      else
        return false;

  }
  // Check if the queue is empty
  bool isEmpty() {
    if(front==-1)
        return true;
    else
        return false;
  }

  // Adding an element
  void enqueue(int element) {
      if(isFull())
        cout<<"Overflow"<<endl;
      else
      {
        if(front==-1 && rear==-1)
        {
          front=0;
          rear=0;
        }
        else
            rear=(rear+1)%MAXLEN;
        items[rear]=element;
      }

  }
  // Removing an element
  int dequeue() {
      int n;
    if(isEmpty())
        cout<<"Underflow"<<endl;
      else
      {
        n=items[front];
        if(front==rear)
        {
          front=-1;
          rear=-1;
        }
        else
            front=(front+1)%MAXLEN;
        return n;
      }
  }

  void display() {
    int i;
    if (isEmpty())
        cout << "\nQUEUE IS EMPTY\n" << endl;
    else {
      cout << endl<< "Items = ";
      for (i = front; i != rear; i = (i + 1) % MAXLEN)
        cout << items[i]<<" ";
      cout <<items[i];
    }
  }

    void size()
    {
        int s;
        if(rear>=front)
            s=rear-front+1;
        else
            s= MAXLEN-(front-rear-1);
        cout<<"Number of elements in queue :"<<s;
    }
};

int main() {
  Queue q;
  q.dequeue();
  q.enqueue(1);
  q.enqueue(2);
  q.enqueue(3);
  q.enqueue(4);
  q.enqueue(5);
  q.enqueue(6);
  q.display();

  int elem = q.dequeue();

  if (elem != -1)
    cout <<"\nELEMENT DELETED: " << elem<<" FROM INDEX "<<endl;

  q.display();
  q.enqueue(7);
  q.display();
  q.enqueue(8);
  q.size();
  return 0;
}
