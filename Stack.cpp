#include<iostream>
using namespace std;

class Stack
{
    public:

    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if(top == size - 1)
        {
            cout<<"Stack is already full"<<endl;
        }
        else
        {
            top++;
           arr[top] = element;
        }
    }

    void pop()
    {
        if(top >= 0)
        {
            top--;
        }
        else
        {
            cout<<"Stack is already empty"<<endl;
        }
    }

    int peek()
    {
        if(top >= 0)
            return arr[top];
        else
        {
            cout<<"Stack i salready empty"<<endl;
            // return -1;
        }
    }

    bool isEmpty()
    {
        if(top == -1)
            return true;
        else
            return false;
    }
};

int main()
{
    Stack st(5);


    st.push(22);
    st.push(45);
    st.push(78);
    

    return 0;


}
