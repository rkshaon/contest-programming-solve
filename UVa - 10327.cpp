#include<iostream>

using namespace std;

int main(){
    int n;
    while(cin>>n){
        int data[n];
        int m=0;
        // input values
        for(int i=0; i<n; i++){
            cin >> data[i];
        }
        // sorting values
        for (int i = 0; i < n-1; i++){
            for (int j = 0; j < n-i-1; j++){
                if (data[j] > data[j+1]){
                    int temp=data[j];
                    data[j]=data[j+1];
                    data[j+1]=temp;
                    m++;
                }
            }
        }
        cout << "Minimum exchange operations : " << m << endl;
    }
    return 0;
}
