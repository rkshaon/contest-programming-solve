#include<iostream>
#include<vector>
#include<cstdio>
#define M 1001

using namespace std;

int prime[M] = {0};
vector<int>primeNumber;

void primeNumGen(){
    primeNumber.push_back(1);
    for(int i=2; i<=M; i++){
        if(prime[i]==0){
            primeNumber.push_back(i);
            for(int j=i+i; j<M; j=i+j){
                prime[j]=j;
            }
        }
    }
}

int sizeChecker(int n){
    int noPrime=0;
    for(int i=0; i<=n; i++){
        if(primeNumber[i]>n) break;
        else noPrime++;
    }
    return noPrime;
}

int main(){
    primeNumGen();
    int n, c;
    while(scanf("%d %d", &n, &c)==2){
        printf("%d %d:", n, c);
        int noPrime = sizeChecker(n);
        //printf(" %d\n", noPrime);
        int startLoop;
        int endLoop=(noPrime/2)+(c-1);
        if(noPrime<=2*c){
            startLoop=0;
            endLoop=noPrime-1;
        }
        else if(noPrime%2==0) startLoop=(noPrime/2)-c;
        else startLoop=(noPrime/2)-(c-1);
        //cout << startLoop << " " << endLoop << endl;
        for(int i=startLoop; i<=endLoop; i++){
            printf(" %d", primeNumber[i]);
        }
        printf("\n\n");
    }
    return 0;
}
