#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int primeWordValue(char word[], int n){
    int number=0;
    for(int i=0; i<n; i++){
        if(word[i]>='a' && word[i]<='z') number+=toascii(word[i])-96;
        else number+=toascii(word[i])-38;;
    }
    return number;
}

bool checkPrime(int n){
    bool status = true;
    for(int i=2; i<n; i++){
        if(n%i==0){
            status = false;
            break;
        }
    }
    return status;
}

int main(){
    char word[21];
    while(gets(word)){
        int number = primeWordValue(word, strlen(word));
        bool status = checkPrime(number);
        if(status) printf("It is a prime word.\n");
        else printf("It is not a prime word.\n");
    }
    return 0;
}
