#include<cstdio>
#include<vector>
#define M 1000001

using namespace std;

int prime[M] = {0};
vector<int>primeNumber;

void primeNumGen(){
    for(int i=2; i<=M; i++){
        if(prime[i]==0){
            prime[i]=-1;
            primeNumber.push_back(i);
            for(int j=i+i; j<M; j=i+j){
                prime[j]=j;
            }
        }
    }
}

int main(){
    primeNumGen();
    int n;
    while(scanf("%d", &n)){
        if(n==0) break;
        else{
            for(int i=0; i<primeNumber.size(); i++){
                if(prime[n-primeNumber[i]]==-1){
                    printf("%d = %d + %d\n", n, primeNumber[i], n-primeNumber[i]);
                    break;
                }
            }
        }
    }
    return 0;
}
