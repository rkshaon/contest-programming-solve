#include<iostream>
#include <cstdio>
/*#include <algorithm>
#define long long LL
*/
using namespace std;

int cal(unsigned int n){
    int cycle_length = 1;
    while ( n != 1 ) {
        if ( n % 2 == 1 ) n = 3 * n + 1;
        else n /= 2;
        cycle_length++;
    }
    return cycle_length;
}

int main ()
{
    int i, j;
    while(cin>>i>>j){
        int temp_i = i;
        int temp_j = j;
        if(i>j) swap(i, j);
        int max_cycle_length = 0;
        int cycle_length;
        while(i<=j) {
            unsigned int n = i;
            // calling function
            cycle_length = cal(n);
            if(cycle_length > max_cycle_length) max_cycle_length = cycle_length;
            i++;
        }
        // printing the output
        cout << temp_i << " " << temp_j << " " << max_cycle_length << endl;
    }
    return 0;
}
