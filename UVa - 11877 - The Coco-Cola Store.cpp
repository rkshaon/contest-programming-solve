#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

/*
UVa - 11877 - The Coco-Cola Store
*/

int main(){
    int n;
    while(scanf("%d", &n)){
        if(n==0) break;
        else{
            float d=((float)(n*3)-1)/2;
            int cola=ceil(d);
            printf("%d\n", cola-n);
        }
    }
    return 0;
}
