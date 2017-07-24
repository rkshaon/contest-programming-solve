#include<stdio.h>
int main()
{
    int i, j, k, test, num;
    scanf("%d",&test);
    for(i=1; i<=test; i++)
    {
        scanf("%d",&num);
        printf("Case %d:\n",i);
        for(j=1; j<=num; j++)
        {
            for(k=1; k<=j; k++)
                {
                    printf("%d",k);
                }
                printf("\n");
        }
    }
            return 0;
}
