#include<stdio.h>
#include<math.h>
int main()
{
    int n[1000] , dr, i, j, test, num, value;
    scanf("%d", &test);
    for(i=0; i<test; i++)
    {
        scanf("%d", &num);
        for(j=0; j<num; j++)
        {
            scanf("%d", &n[j]);
        }
        if(n[1]-n[0]==n[2]-n[1])
        {
            dr = n[1]-n[0];
            value = n[0]+num*dr;
        }
        else if(n[1]/n[0]==n[2]/n[1])
        {
            dr = n[1]/n[0];
            value = n[0]*pow(dr, num);
        }
        printf("%d\n", value);
    }
    return 0;
}
