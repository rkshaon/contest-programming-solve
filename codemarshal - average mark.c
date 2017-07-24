#include<stdio.h>

main()
{
    int i, j, test, student, mark, sum, avg;
    scanf("%d", &test);
    for(i=1; i<=test; i++)
    {
        sum = 0;
        scanf("%d", &student);
        for(j=1; j<=student; j++)
        {

            scanf("%d", &mark);
            sum = sum + mark;
        }
        avg = sum/ student;
        printf("Case %d: %d\n", i, avg);
    }
}
