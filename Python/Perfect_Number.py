n=int(input("Enter a number:"))
sum=0
for i in range(1,n):
    if(n%1==0):
        sum+=i
if(sum==n):
    print(n,"is a perfect number")
else:
    print(n,"is not a perfect number")

