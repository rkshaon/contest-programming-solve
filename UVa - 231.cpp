#include<iostream>
#include<cstdio>
#include<algorithm>
#define M 1001

using namespace std;

/*
UVa 230
Testing the CATCHER
Problem type: Longest Decreasing Subsequence
*/

int main(){
    int data[M];
    int LDS[M];
    int test=0;
    bool isItFirst=false;
    while(scanf("%d", &data[0])){
        int index=0;
        if(data[0]==-1) break;
        if(isItFirst) printf("\n");
        isItFirst = true;
        while(scanf("%d", &data[++index])){
            if(data[index]==-1) break;
        }
        // checking input is working
        /*
        for(int i=0; i<index; i++){
            printf("%d ", data[i]);
        }
        */
        // checking length of input
        //printf("%d\n", index);
        for(int i=0; i<index; i++){
            LDS[i]=1;
            for(int j=i-1; j>=0; j--){
                if(data[j] > data[i]){
                    if(LDS[i] < LDS[j]+1){
                        LDS[i]=LDS[j]+1;
                    }
                }
            }
        }
        printf("Test #%d:\n  maximum possible interceptions: %d\n", ++test, *max_element(LDS, LDS+index));
    }
    return 0;
}
