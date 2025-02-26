n=int(input("Enter a number:"))
f1=0
f2=1
f3=1
li=[]
li.append(f1)
li.append(f2)
if(n>1):
    for i in range(1,n):
        f3=f1+f2
        f1=f2
        f2=f3
        li.append(f3)
    print(li)

