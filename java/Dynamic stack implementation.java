// Creating interface for a stack. Write a Java program to implement dynamic stack .

interface IntStack 
{
    void push(int item); 
    int pop(); 
}

class DynStack implements IntStack 
{
    private int stck[];
    private int top;  
    DynStack(int size) 
    {
        stck = new int[size];
        top = -1;
    }
    public void push(int item) 
    {
        if(top==stck.length-1) 
        {
            int temp[] = new int[stck.length * 2];
            for(int i=0; i<stck.length; i++) 
                temp[i] = stck[i];
            stck = temp;
            stck[++top] = item;
        }
        else
            stck[++top] = item;
    }
    public int pop() 
    {
        if(top < 0) 
        {
            System.out.println("Stack underflow.");
            return 0;
        }
        else
            return stck[top--];
    }
}

class IFTest2 
{
    public static void main(String args[]) 
    {
        DynStack mystack1 = new DynStack(5);
        DynStack mystack2 = new DynStack(8);
        for(int i=0; i<12; i++) mystack1.push(i);
        for(int i=0; i<20; i++) mystack2.push(i);
        System.out.println("Stack in mystack1:");
        for(int i=0; i<12; i++)
            System.out.println(mystack1.pop());
        System.out.println("Stack in mystack2:");
        for(int i=0; i<20; i++)
            System.out.println(mystack2.pop());
}
}
