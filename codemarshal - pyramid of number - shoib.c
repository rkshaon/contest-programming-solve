#include<stdio.h>
int main()
{
    int i,j,n,k,test;
    scanf("%d",&test);
    for(k=1;k<=test;k++)
    {
        scanf("%d",&n);
        printf("Case %d:\n",k);
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
                {
                    printf("%d",j);
                }
                printf("\n");
        }
    }
            return 0;
}
