#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int lucky[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    int counter = 0;
    for(int i=0; i<14; i++){
        if(n%lucky[i]==0) counter = 1;
    }
    if(counter!=0) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
