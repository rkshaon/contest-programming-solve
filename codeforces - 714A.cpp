#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
    long long l1, r1, l2, r2, k;
    cin >> l1 >> r1 >> l2 >> r2 >> k;
    long long time = 0;
    long long int start_count, end_count;
    if(l2>=l1) start_count = l2;
    else start_count = l1;
    if(r2>=r1) end_count = r1;
    else end_count = r2;
    /*
    for(i=start_count; i<=end_count; i++){
        time++;
        if(i==k) time--;
    }
    */
    if(end_count >= start_count){
        time = (end_count - start_count)+1;
        if(k>=start_count && k<=end_count)
            time=time-1;
    }
    //cout << time << endl;
    cout << time << endl;
    //printf("%I64d\n", time);
    return 0;
}
