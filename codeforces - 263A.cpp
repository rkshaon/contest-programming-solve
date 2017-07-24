#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int matrix[5][5];
    int i, j;
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            //cout << i << j;
            cin >> matrix[i][j];
        }
        //cout << endl;
    }
    //cout << endl;
    int i_pos, j_pos;
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(matrix[i][j]==1){
                i_pos = i+1;
                j_pos = j+1;
                break;
            }
            //cout << matrix[i][j];
        }
        //cout << endl;
    }
    int total_move = abs(i_pos - 3) + abs(j_pos - 3);
    cout << total_move << endl;
    return 0;
}
