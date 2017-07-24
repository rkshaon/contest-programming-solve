#include<stdio.h>

int main()
{
    int t, v;

    while(scanf("%d %d", &t, &v)!=EOF)
    {
        printf("%d\n", 2*v*t);
    }
    return 0;
}
