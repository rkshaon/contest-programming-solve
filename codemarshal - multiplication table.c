#include<stdio.h>

int main()
{
    int test, i, j, number;

    scanf("%d", &test);
    for(i=1; i<=test; i++)
    {
        printf("Case %d:\n", i);
        scanf("%d", &number);
        for(j=1; j<=10; j++)
        {
            printf("%d * %d = %d\n", number, j, number*j);
        }
    }
    return 0;
}
