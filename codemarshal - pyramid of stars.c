#include<stdio.h>
int main()
{
    int test, star, i, j, k, l, m;
    scanf("%d", &test);
    for(i=1; i<=test; i++)
    {
        scanf("%d", &star);
        printf("Case %d:\n", i);
        for(j=1; j<=star; j++)
        {
            for(k=1; k<=j; k++)
            {
                printf("*");
            }
            printf("\n");
        }
        for(l=star-1; l>=1; l--)
        {
            for(m=l; m>=1; m--)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}
