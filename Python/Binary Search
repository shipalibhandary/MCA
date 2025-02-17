def bsearch(li,low,high,ele):
    if high>low:
        mid=(high+low)//2
        if(li[mid]==ele):
            return mid
        elif li[mid]>ele:
            return bsearch(li,low,mid-1,ele)
        else:
            return bsearch(li,mid+1,high,ele)
    else:
        return 0

li=(list(input("Enter list to search:")))
ele_search=int(input("Enter element to search:"))
print("The list is:",li)
res=bsearch(li,0,len(li)-1,ele_search)
print(res)
if res:
    print("element found at index:",str(res))
else:
    print("element Not found")
    
