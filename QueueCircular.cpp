#include<iostream>
using namespace std;

class CircularQueue
{
    public:

    int* arr;
    int front;
    int rear;
    int size;

    CircularQueue(int size)
    {
        this -> size = size;
        arr = new int[size];
        front = rear = -1;
    }

    bool enqueue(int value)
    {
        if((front == 0 && rear == size - 1) || rear ==  (front - 1)%(size - 1) )
        {
            cout<<"Queue is  Full"<<endl;
            return false;
        }
        else if(front == -1)
        {
            front = rear = 0;
        }
        else if(rear == size - 1 && front != 0)
        {
            rear = 0;
        }
        else
        {
            rear++;
        }
            arr[rear] = value;
            return true;

    }
    

    int dequeue()
    {
        if(front == -1)
        {    cout<<"Queue is Empty"<<endl;;
            return -1;
        }

        int ans = arr[front];
        arr[front] = -1;

        if(front == rear)
        {
            front = rear = -1;
        }
        else if(front == size - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }

        return ans;
    }

};

int main()
{
    CircularQueue obj(5);

    obj.enqueue(34);
    obj.enqueue(23);
    obj.enqueue(90);

    cout<<obj.dequeue()<<endl;
return 0;
}
