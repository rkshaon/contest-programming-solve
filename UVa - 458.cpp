#include<bits/stdc++.h>

using namespace std;

int main(){
    string inputWord;
    while(cin>>inputWord){
        for(int i=0; i<inputWord.length(); i++){
            printf("%c", inputWord[i]-7);
        }
        printf("\n");
    }
    return 0;
}
