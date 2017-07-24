#include<cstdio>
#include<vector>
#define M 1000001

using namespace std;

int prime[M]={0};
vector<int>primeNumber;

void primeGen(){
    for(int i=2; i<=M; i++){
        if(prime[i]==0){
            prime[i]=-1;
            primeNumber.push_back(i);
            for(int j=i+i; j<M; j+=i){
                prime[j]=j;
            }
        }
    }
}

int main(){
    primeGen();
    int n;
    while(scanf("%d", &n)){
        if(n==0) break;
        else{
            bool noState=true;
            //printf("%d:\n", n);
            for(int i=0; i<primeNumber.size(); i++){
                if((n-primeNumber[i])<=0) break;
                if(prime[n-primeNumber[i]]==-1){
                    printf("%d:\n%d+%d\n", n, primeNumber[i], n-primeNumber[i]);
                    noState=false;
                    break;
                }
            }
            if(noState) printf("%d:\nNO WAY!\n", n);
        }
    }
    return 0;
}
