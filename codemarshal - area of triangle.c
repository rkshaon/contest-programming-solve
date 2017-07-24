#include<stdio.h>
#include<math.h>
int main()
{
    int test, a, b, c, i;
    double s, area;
    scanf("%d", &test);
    for(i=1; i<=test; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        s = (a+b+c)/(double)2;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
        printf("Case %d: %.10lf\n", i, area);
    }
    return 0;
}
