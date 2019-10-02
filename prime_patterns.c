#include<stdio.h>
#include<stdlib.h>
void primes(int n)
{
    int i,count,c;
    i=3;
    for ( count = 2 ; count <= n ;  )
   {
      for ( c = 2 ; c <= i - 1 ; c++ )
      {
         if ( i%c == 0 )
            break;
      }
      if ( c == i )
      {
         printf("%d ", i);
         count++;
      }
      i++;
   }
}
void main()
{
    int n,i,j;
    scanf("%d",&n);

    for(i=n;i>0;i--)
    {
        for(j=i;j<n;j++)
        {
            printf("2 ");
            primes(j);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            printf("2 ");
            primes(j);
        }
        printf("\n");
    }

}
