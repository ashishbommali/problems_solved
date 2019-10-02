#include<stdio.h>

int N,M;
int A[20][200];

int mhd(int Sx,int Sy,int Dx,int Dy,int A[20][20],int N);

int mhd(int Sx,int Sy,int Dx,int Dy,int A[N][M],int N)
{
    int i_Sx=Sx,i_Sy=Sy;
    int mhd;
    if(i_Sx>N||i_Sx<1||i_Sy>M||i_Sy<1)
        return;

    int dist=((i_Sx-Dx)*(i_Sx-Dx))+((i_Sy-Dy)*(i_Sy-Dy));

    if(dist==A[i_Sx][i_Sy])
        return dist;
    if(A[i_Sx][i_Sy]==A[Dx][Dy])
        return 0;
    mhd(i_Sx+1,i_Sy,Dx,Dy,A,N);
    mhd(i_Sx,i_Sy+1,Dx,Dy,A,N);
    mhd(i_Sx-1,i_Sy,Dx,Dy,A,N);
    mhd(i_Sx,i_Sy-1,Dx,Dy,A,N);
    mhd(i_Sx-1,i_Sy-1,Dx,Dy,A,N);
    mhd(i_Sx+1,i_Sy+1,Dx,Dy,A,N);
    mhd(i_Sx-1,i_Sy+1,Dx,Dy,A,N);
    mhd(i_Sx+1,i_Sy-1,Dx,Dy,A,N);
    mhd(i_Sx-1,i_Sy+1,Dx,Dy,A,N);

}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {

        scanf("%d%d",&N,&M);
        int i,j;

        for(i=1;i<=N;i++)
        {
            for(j=1;j<=M;j++)
            {
                scanf("%d",A[i][j]);
            }
        }
        int Sx,Sy;
        scanf("%d%d",&Sx,&Sy);
        long long int Q;
        scanf("%lld",&Q);
        long long int k;
        for(k=0;k<Q;k++)
        {
            int Dx,Dy;
            scanf("%d",&Dx,&Dy);
            int d=mhd(Sx,Sy,Dx,Dy,A,N);
            if(d==A[Sx][Sy])
            {
                printf("%d",d);
            }
            else
            {
                return -1;
            }


        }
    }

    return 0;
}
