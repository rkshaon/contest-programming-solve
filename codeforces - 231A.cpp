#include<iostream>

using namespace std;

int main(){
    int n, i, counter=0;
    int p, v, t;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> p >> v >> t;
        if((p!=0 && v!=0) || (p!=0 && t!=0) || (v!=0 && t!=0)) counter++;
    }
    cout << counter << endl;
    return 0;
}
