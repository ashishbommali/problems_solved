n=int(input())
t=int(input())


p=[]


cnt=[0]*n


last=[]


for i in range(n):

    
    pi=list(map(int,input().split()))

    
    p.append(pi)
for i in range(n):

  
    last.append(p[i][t])

  
    p[i].pop(t)

ti=2
    
if(t%2==0):

  
	t=t-2


    else:

  
	t=t-1


while(ti<=t):

    
   sumarr=[]

    
   for i in range(n):


       s=0
       for j in range(ti):
           s+=p[i][j]*last[i]


           sumarr.append(s)

    
       index=sumarr.index(max(sumarr))

    
       cnt[index]+=1

    
       ti+=2


print(cnt.index(max(cnt))+1)