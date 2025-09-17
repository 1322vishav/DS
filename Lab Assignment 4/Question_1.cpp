// Program to implement simple queue through classes and objects
#include <iostream>
#define MAXLEN 5
using namespace std;
class Queue
{
      int front,rear;
      int queue[MAXLEN];

      public:
      Queue()
      {front=rear=-1;}

      bool isfull(){
            if(rear==MAXLEN-1){
                return true;
            }
            else
                return false;
        }

       void enqueue(int item)
       {
            if(isfull())
                cout<<"\nQUEUE OVERFLOW";

            else if(front==-1 && rear==-1)   //1st element
            {
                front=rear=0;
                queue[rear]=item;
                cout<<"\nITEM INSERTED: "<<item<<" at index "<<rear<<endl;
            }
             else
             {
                rear++;
                queue[rear]=item;
                cout<<"\nITEM INSERTED: "<<item <<" at index "<<rear<<endl;
             }
       }

       bool isEmpty() {
            if(front==-1||front>rear)
            {
                return true;
            }
            else
                return false;
        }

       void dequeue()
       {
            int item;
             if(isEmpty())
                cout<<"\nQueue is empty\n";
             else if(front==0 && rear==0)
             {
                item=queue[front];
                cout<<"\n\nITEM DELETED: "<<item <<" from index "<<front;
                front=rear=-1;

             }
             else
             {
                item=queue[front];
                cout<<"\n\nITEM DELETED: "<<item <<" from index "<<front;
                front++;
             }
       }

       void display()
       {
            if(isEmpty())
            {
                cout<<"\n\nQUEUE IS EMPTY\n";
            }
            else
            {
                cout<<"\n\nQUEUE ITEMS\n";
                for(int i=front;i<=rear;i++)
                {
                    cout<<queue[i]<<" ";
                }
                    cout<<endl;
            }
        }

    void size()
    {
        int s= rear-front+1;
        cout<<"\nSize is ="<<s;
    }
};

int main()
{
      Queue q;

      q.display();
      q.enqueue(10);
      q.enqueue(20);

      q.display();
      q.dequeue();

      q.enqueue(30);
      q.enqueue(40);
      q.enqueue(50);
      q.enqueue(60);

      q.display();
      q.size();
      return 0;
}
