// a(n) = 1 + (n(n+1))/2 formula
#include<iostream>
#include<cstdio>

using namespace std;

int main(){
    long long int n;
    while(cin>>n){
        if(n<0){
            break;
        }
        else{
            cout << 1 + ((n*(n+1))/2) << endl;
        }
    }
    return 0;
}
