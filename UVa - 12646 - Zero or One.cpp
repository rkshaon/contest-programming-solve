#include<iostream>
#include<cstdio>

using namespace std;

int main(){
    int a, b, c;
    while(scanf("%d %d %d", &a, &b, &c)!=EOF){
        if(a==b && b==c) printf("*\n");
        else if(a!=b && b==c) printf("A\n");
        else if(b!=a && a==c) printf("B\n");
        else if(c!=b && a==b) printf("C\n");
    }
    return 0;
}
