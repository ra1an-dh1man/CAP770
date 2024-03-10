#include<iostream>
using namespace std;

class Queue
{
    int * arr;
    int front;
    int rearidx;
    int size;

    public:

    Queue()
    {
        size = 100;
        arr = new int[size];

        front = 0;
        rearidx = 0;
    }

    void enqueu(int data)
    {
        if(rearidx == size)
            cout<<"Queue is Full"<<endl;
        else
        {
            arr[rearidx] = data;
            rearidx++;
        }
    }

    int dequeue()
    {
        if(front == rearidx)
            return -1;
        else
        {
            int deqValue = arr[front];
            front++;

            if(front == rearidx)
            {
                front = 0;
                rearidx = 0;
            }
            return deqValue;
        }
    }
    

    int frontVal()
    {
        if(front == rearidx)
            return -1;
        else
            return arr[front];
    }

    bool isEmpty()
    {
        if(front == rearidx)
            return true;
        else   
            return false;
    }

};

int main()
{

    Queue obj;

    obj.enqueu(10);
    obj.enqueu(20);
    obj.enqueu(55);

    cout<<obj.frontVal()<<endl;

    cout<<obj.dequeue()<<endl;
    cout<<obj.dequeue()<<endl;

    cout<<obj.isEmpty()<<endl;
return 0;

}
