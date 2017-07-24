#include<iostream>
#include<cstdio>
#include<vector>
#define M 20000001

using namespace std;

int prime[M]={0};
vector<int>primeNumber;

void primeGenerate(){
    for(int i=2; i<=M; i++){
        if(prime[i]==0){
            prime[i]=-1;
            //primeNumber.push_back(i);
            for(int j=i+i; j<M; j=i+j){
                prime[j]=j;
            }
        }
    }
}

void twinPrime(){
    for(int i=2; i<M; i++){
        if(prime[i]==-1 && prime[i+2]==-1){
            primeNumber.push_back(i);
        }
    }
}

int main(){
    primeGenerate();
    twinPrime();
    int n;
    while(scanf("%d", &n)!=EOF){
        //cout << n << endl;
        printf("(%d, %d)\n", primeNumber[n-1], primeNumber[n-1]+2);
    }
    return 0;
}
