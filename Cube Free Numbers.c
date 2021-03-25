#include<stdio.h>
int k[1000001]={0};
void cube_freenumber()
{

    int i,j,n,x;
    for(i=2;i<=100;++i)
    {
        if(k[i]==0)
        {
           x=i*i*i;
           for(j=x;j<=1000001;j+=x)
           k[j]=-1;
        }
    }
        x=1;
        for(i=1;i<=1000001;i++)
            if(k[i]==0)
            k[i]=x++;
}


int main()
    {
        cube_freenumber();
        int i,n,y;
        scanf("%d",&n);
        for(i=n;i<=n;i++)
        {
            //scanf("%d",&y);
            if(k[n]=!-1)
            {
                printf("%d %d\n",i,k[n]);
            }
            else
                printf(" %d Not cube free\n ",i);
        }
        return 0;
    }

















