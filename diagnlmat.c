#include<stdio.h>
void main()
{
    int n,i,j,count=1;
    scanf("%d",&n);
    int a[3][3]={1,1,1,0,1,0,1,0,0};

    for(i=0;i<n;i++)
    {
      //  printf("l1:");
        for(j=0;j<n;j++)
        {
          //  printf("l2:");
            if(i!=j)
            {
               // printf("i1:");
                if(a[i][j]==0);
                {
                  //  printf("i2:");
                    count=0;
                  //  printf("\n");
                }
            }
         }
        if(j==(n-i)||i==(n-j))continue;
    }
    if(count==0)
        printf("yes");
    else
        printf("no");
}
