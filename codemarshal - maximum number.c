#include<stdio.h>
main()
{
    int a, b, c, test, i;
    scanf("%d", &test);
    for(i=1; i<=test; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        if(a>b && a>c)
            printf("Case %d: %d\n", i, a);
        else if(b>c && b>a)
            printf("Case %d: %d\n", i, b);
        else if(c>a && c>b)
            printf("Case %d: %d\n", i, c);
        else if(a==b && b==c && c==a)
            printf("Case %d: %d\n", i, a);
        else if(a==b && a>c)
            printf("Case %d: %d\n", i, a);
        else if(a>b && a==c)
            printf("Case %d: %d\n", i, a);
        else if(b==a && b>c)
            printf("Case %d: %d\n", i, b);
        else if(b>a && b==c)
            printf("Case %d: %d\n", i, b);
        else if(c==a && c>b)
            printf("Case %d: %d\n", i, c);
        else if(c>a && c==b)
            printf("Case %d: %d\n", i, c);
    }
}
