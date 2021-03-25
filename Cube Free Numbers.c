#include<stdio.h>
int k[1000001]={0};
void cube_freenumber()
{

    int i,j,n,x;
    for(i=n;i<=n;i++)
    {
        if(k[i]==0)
        {
           x=i*i*i;
           for(j=x;j<=1000000;j+=x)
           k[j]=-1;
        }
    }
        x=1;
        for(i=1;i<=1000000;i++)
        if(k[i]=x++)
}

int main()
    {
        cube_freenumber();
        int i,t,y;
        scanf("%d",&t);
        for(i=1;i<=t;i++)
        {
            scanf("%d",&y);
            if(k[y]=-1)
            {
                printf("%d",k[y]);
            }
            else
                printf("Not cube free ");
        }
        return 0;
    }

















