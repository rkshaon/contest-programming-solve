#include<stdio.h>
#include<math.h>

int main()
{
    int test,m,i,j,k[1000],sum, dr;
    scanf("%d",&test);
    for(i=1;i<=test;i++)
    {
        scanf("%d",&m);
        for(j=0;j<m;j++)
        {
            scanf("%d", &k[j]);
        }
        if(k[1]-k[0]==k[2]-k[1])
        {
            dr = k[1]-k[0];
            sum=k[0]+m*dr;
        }
        else if(k[1]/k[0]==k[2]/k[1])
        {
             dr = k[1]/k[0];
             sum=k[0]*pow(dr, m);
        }
        printf("%d\n",sum);
    }
    return 0;
}
