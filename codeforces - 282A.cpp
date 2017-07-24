#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    string state;
    int x=0;
    for(int i=0; i<n; i++){
        cin >> state;
        if(state[1]=='+') x++;
        else if(state[1]='--') x--;
    }
    cout << x << endl;
    return 0;
}
