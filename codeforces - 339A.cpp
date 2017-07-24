#include<iostream>

using namespace std;

int main(){
    string sum;
    cin >> sum;
    int len = sum.length();
    //cout << len;
    //cout << sum << endl;
    int temp;
    for(int i=0; i<len; i+=2){
        for(int j=0; j<len-1; j+=2){
            if(sum[j]>sum[j+2]){
                //swap(sum[i], sum[i+2]);
                temp=sum[j+2];
                sum[j+2]=sum[j];
                sum[j]=temp;
            }
        }
        //cout << sum[i] << endl;
    }
    cout << sum << endl;
    return 0;
}
