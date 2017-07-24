#include<iostream>

using namespace std;

int main(){
    int k, n, w;
    cin >> k >> n >> w;
    int needMoney = 0;
    for(int i=1; i<=w; i++){
        needMoney+=(i*k);
    }
    if(needMoney>n) cout << needMoney-n << endl;
    else cout << "0" << endl;
    return 0;
}
