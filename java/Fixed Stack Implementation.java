// Write a Java program to implement fixed stack 

interface IntStack 
{
    void push(int item); // store an item
    int pop(); // retrieve an item
}

class FixedStack implements IntStack
{
    private int stck[];
    private int top;
    // allocate and initialize stack
    FixedStack(int size) 
    {
        stck = new int[size];
        top = -1;
    }
    public void push(int item)
    {
        if(top==stck.length-1) // use length member
            System.out.println("Stack is full.");
        else
            stck[++top] = item;
    }
    // Pop an item from the stack
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

class IFTest 
{
    public static void main(String args[]) 
    {
        FixedStack mystack1 = new FixedStack(5);
        FixedStack mystack2 = new FixedStack(8);
        for(int i=0; i<5; i++) mystack1.push(i);
        for(int i=0; i<8; i++) mystack2.push(i);
        System.out.println("Stack in mystack1:");
        for(int i=0; i<5; i++)
            System.out.println(mystack1.pop());
        System.out.println("Stack in mystack2:");
        for(int i=0; i<8; i++)
            System.out.println(mystack2.pop());
    }
}
