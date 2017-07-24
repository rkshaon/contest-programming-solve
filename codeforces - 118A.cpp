#include<iostream>

using namespace std;

int main(){
    string word;
    cin >> word;
    int len = word.length();
    //cout << len;
    for(int i=0; i<len; i++){
        if(word[i]=='B') word[i]='b';
        if(word[i]=='C') word[i]='c';
        if(word[i]=='D') word[i]='d';
        if(word[i]=='F') word[i]='f';
        if(word[i]=='G') word[i]='g';
        if(word[i]=='H') word[i]='h';
        if(word[i]=='J') word[i]='j';
        if(word[i]=='K') word[i]='k';
        if(word[i]=='L') word[i]='l';
        if(word[i]=='M') word[i]='m';
        if(word[i]=='N') word[i]='n';
        if(word[i]=='P') word[i]='p';
        if(word[i]=='Q') word[i]='q';
        if(word[i]=='R') word[i]='r';
        if(word[i]=='S') word[i]='s';
        if(word[i]=='T') word[i]='t';
        if(word[i]=='V') word[i]='v';
        if(word[i]=='W') word[i]='w';
        if(word[i]=='X') word[i]='x';
        if(word[i]=='Z') word[i]='z';
        if(word[i]=='b' || word[i]=='c' || word[i]=='d' || word[i]=='f' || word[i]=='g' || word[i]=='h' || word[i]=='j' || word[i]=='k' || word[i]=='l' || word[i]=='m' || word[i]=='n' || word[i]=='p' || word[i]=='q' || word[i]=='r' || word[i]=='s' || word[i]=='t' || word[i]=='v' || word[i]=='w' || word[i]=='x' || word[i]=='z'){
            cout << "." << word[i];
        }
    }
    cout << endl;
    return 0;
}
