#include<iostream>

using namespace std;

int main(){
    int stop;
    cin >> stop;
    int max_pass=0;
    int pass=0;
    int pass_in, pass_out;
    for(int i=0; i<stop; i++){
        cin >> pass_out >> pass_in;
        pass = (pass - pass_out) + pass_in;
        if(pass>=max_pass) max_pass = pass;
    }
    cout << max_pass << endl;
    return 0;
}
