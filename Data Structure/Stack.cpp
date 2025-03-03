//c++ program to implement Stack data structure using arrays and class.
#include<iostream>
#define MAX 5
using namespace std;

class Stack
{
    int stk[MAX],top;
    public:
        Stack()
        {
            top=-1;
        }
        void push();
        void pop();
        void sdisplay();
};

int main()
{
    Stack s;
    int ch;
    cout<<"Menu\n1.Push\n2.Pop\n3.Display\n4.Exit\n";
    while(1)
    {
        cout<<"\nEnter your choice:";
        cin>>ch;
        switch(ch)
        {
            case 1:s.push();
                    break;
            case 2:s.pop();
                    break;
            case 3:s.sdisplay();
                    break;
            case 4:exit(0);
        }
    }
    return 0;
}

void Stack::push()
{
    int num;
    if(top==MAX-1)
        cout<<"Stack is full!\n";
    else
    {
        cout<<"Enter the element:";
        cin>>num;
        stk[++top]=num;
    }
}

void Stack::pop()
{
    int num;
    if(top==-1)
        cout<<"Stack is empty!\n";
    else
    {
        num=stk[top];
        top-=1;
        cout<<"Popped element is:"<<num<<"";
    }
}

void Stack:: sdisplay()
{
    int i;
    if(top==-1)
        cout<<"Stack is empty!\n";
    else
    {
        for(i=top;i>=0;i--)
        {
            cout<<stk[i]<<"\n";
        }
    }
}
  
