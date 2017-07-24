#include<stdio.h>
int main()
{
    int st_num, mark, i;
    scanf("%d", &st_num);
    for(i=1; i<=st_num; i++)
    {
        scanf("%d", &mark);
        if(90<=mark) printf("Student %d: A+\n", i);
        else if(80<=mark) printf("Student %d: A\n", i);
        else if(70<=mark) printf("Student %d: A-\n", i);
        else if(60<=mark) printf("Student %d: B+\n", i);
        else if(50<=mark) printf("Student %d: B-\n", i);
        else if(40<=mark) printf("Student %d: C\n", i);
        else if(35<=mark) printf("Student %d: D\n", i);
        else if(0<=mark) printf("Student %d: F\n", i);
    }
    return 0;
}
