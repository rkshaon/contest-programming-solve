#include<stdio.h>

int main(){
    int n, k, i, counter, score[51];
    while(scanf("%d %d", &n, &k)!=EOF){
        counter=0;
        for(i=0; i<n; i++){
            scanf("%d", &score[i]);
        }
        for(i=0; i<n; i++){
            if(score[i]>=score[k-1] && score[i]>0) counter++;
        }
        printf("%d\n", counter);
    }
    return 0;
}
