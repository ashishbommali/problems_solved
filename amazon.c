#include<stdio.h>
void range(int r)
{

}
void main()
{
    long int n,m;
    scanf(%ld %ld,%n,&m);
    long int a[n]={0};
    long int i;
    long int low=1,high=n;
    long int count=0;
    long int x=low+high;
    for(i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
        printf("%ld",x);
        x+=a[i];
    }

}
