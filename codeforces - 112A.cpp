#include<iostream>
#include<cmath>

using namespace std;

int main(){
    string a, b;
    cin >> a >> b;
    int len = a.length();
    for(int i=0; i<len; i++){
        if(a[i]>=65 && a[i]<=90) a[i]=a[i]+32;
        if(b[i]>=65 && b[i]<=90) b[i]=b[i]+32;
    }
    //cout << a << endl << b << endl;
    int value;
    int flag = 0;
    for(int i=0; i<len; i++){
        value = (a[i] - b[i]);
        if(value>0) flag = flag + 1;
        else if(value<0) flag = flag - 1;
        else if(value==0) flag = flag + 0;
        if(flag!=0) break;
        //cout << "Diff: " << value << endl;
    }
    if(flag==0) cout << "0" << endl;
    else if(flag>0) cout << "1" << endl;
    else if(flag<0) cout << "-1" << endl;
    //cout << flag << endl;
    //cout << value << endl;
    return 0;
}
