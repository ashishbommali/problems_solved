n,k=map(int,input().split())
count=0
while(n):
    b=int(input(""))
    if(b%k==0):
        count+=1
    n-=1   
print(count)
