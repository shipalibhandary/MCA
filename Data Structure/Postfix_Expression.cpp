// A c++ program to evaluate the given postfix expression using Stack data structure.
#include<iostream>
#include<math.h>
#define MAX 20
using namespace std;

class PostEva
{
    int top;
    int stk[MAX];
    public:
        PostEva()
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
            obj=stk[top];
            top=top-1;
            return obj;
        }
        int operation(int op1,int op2,char symb)
        {
            double res=0;
            switch(symb)
            {
                case'+':res=op1+op2;
                        break;
                case'-':res=op1-op2;
                        break;
                case'*':res=op1*op2;
                        break;
                case'/':res=op1/op2;
                        break;
                case'^':res=pow(op1,op2);
                        break;
            }
            return res;
        }
};

int main()
{
    PostEva pe;
    char postfix[20],symb;
    int op,op1,op2,i=0,value=0;
    cout<<"Enter the postfix expression(Digits and operators):";
    cin>>postfix;
    while(postfix[i]!='\0')
    {
        symb=postfix[i];
        if(symb>=48&&symb<=57)
        {
            op=symb-48;
            pe.push(op);
        }
        else
        {
            op2=pe.pop();
            op1=pe.pop();
            value=pe.operation(op1,op2,symb);
            pe.push(value);
        }
        i++;
    }
    value=pe.pop();
    cout<<"The value after Postfix Evaluation:"<<value;
}

