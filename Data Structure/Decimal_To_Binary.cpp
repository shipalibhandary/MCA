//Write a c++ program to convert decimal number to binary number using Stack data structure.
#include<iostream>
#define MAX 20
using namespace std;

class DecToBinary
{
    public:
        int top;
        int stk[MAX];
        DecToBinary()
        {
            top=-1;
        }
        void push(int obj)
        {
            stk[++top]=obj;
        }
        int pop()
        {
            int obj;
            return obj=stk[top--];
        }
};

int main()
{
    DecToBinary db;
    int num,n,rem,binary=0;
    cout<<"Enter the number to be converted:";
    cin>>num;
    n=num;
    while(n!=0)
    {
        rem=n%2;
        db.push(rem);
        n=n/2;
    }
    while(db.top!=-1)
    {
        binary=binary*10+db.pop();
    }
    cout<<"Binary value of "<<num<<" is:"<<binary;
    return 0;
}

