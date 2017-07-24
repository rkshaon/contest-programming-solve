#include<iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int sum = a;
    while(a>=b){
        sum = sum + (a/b);
        a = ((a/b) + (a%b));
    }
    cout << sum << endl;
    return 0;
}
