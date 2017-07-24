#include<iostream>

using namespace std;

int main(){
    int i, n, max_num, min_num, amazing_performance = 0;
    cin >> n;
    int point[n];
    /*for(i=0; i<n; i++){
        cin >> point[i];
        if(i==0){
            max_num = point[i];
            min_num = point[i];
        }
        if(point[i]>max_num){
            amazing_performance++;
            max_num = point[i];
        }
        if(point[i]<min_num){
            amazing_performance++;
            min_num = point[i];
        }
    }*/
    for(i=0; i<n; i++) cin >> point[i];
    max_num = point[0];
    min_num = point[0];
    for(i=0; i<n; i++){
        if(point[i]>max_num){
            amazing_performance++;
            max_num = point[i];
        }
        if(point[i]<min_num){
            amazing_performance++;
            min_num = point[i];
        }
    }
    cout << amazing_performance << endl;
    return 0;
}
