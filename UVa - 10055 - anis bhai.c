#include<stdio.h>

int main()
{
    long int h, o;

    while(scanf("%ld %ld", &h, &o)!=EOF) {
        if(o>h) printf("%ld\n", o-h);
        else printf("%ld\n", h-o);
    }
    return 0;
}
