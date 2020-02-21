#include<stdio.h>
int main()
{
    int i,t,n,p,q,weights,sum,j,count;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d",&n,&p,&q);
        count=0;
        sum=0;
           for(j=1;j<=n;j++)
           {
               scanf("%d",&weights);
               sum=sum+weights;{
               if(sum<=q && j<=p)
               {
                   count=count+1;
               }

           }

           }
            printf("Case %d: %d\n",i,count);

    }
}
