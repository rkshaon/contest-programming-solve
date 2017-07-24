#include<stdio.h>

int main(){
    int n, m;
    int grid, counter;
    while(scanf("%d %d", &n, &m)!=EOF){
        grid = n*m;
        counter = 0;
        while(grid!=0){
            n=n-1;
            m=m-1;
            grid=n*m;
            counter++;
        }
        if(counter%2==1) printf("Akshat\n");
        else if(counter%2==0) printf("Malvika\n");
    }
    return 0;
}
