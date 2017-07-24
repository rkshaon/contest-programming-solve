#include<iostream>

using namespace std;

int main(){
    int n, k;
    while(cin>>n>>k){
        int total = n;
        while(n>=k){
            n=n-k;
            total++;
            n++;
        }
        cout << total << endl;
    }
    return 0;
}
