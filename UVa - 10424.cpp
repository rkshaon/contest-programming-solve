#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int calValue(char n[]){
    int value=0;
    for(int i=0; i<strlen(n); i++){
        if(n[i]>=97 && n[i]<=122) value=value+n[i]-96;
        else if(n[i]>=65 && n[i]<=90) value=value+n[i]-64;
    }
    return value;
}

int conValue(int n){
    if(n<10) return n;
    else conValue((n%10)+(n/10));
}

/*
n = 77
n = (n%10) + (n/10)
n = 7 + 7
n = 14
n = 4 + 1
n = 5
*/

int main(){
    char n1[27], n2[27];
    while(gets(n1)){
        gets(n2);
        //puts(n1);
        //puts(n2);
        int n1Value = calValue(n1);
        int n2Value = calValue(n2);
        int n1Con = conValue(n1Value);
        int n2Con = conValue(n2Value);
        //cout << n1Value << endl << n2Value << endl;
        //cout << n1Con << endl << n2Con << endl;
        if(n1Con==n2Con) printf("100.00 %%\n");
        else if(n1Con>n2Con) printf("%.2lf %%\n", double(double(n2Con)/double(n1Con))*100);
        else if(n1Con<n2Con) printf("%.2lf %%\n", double(double(n1Con)/double(n2Con))*100);
        //double love = double(double(n2Con)/double(n1Con)) * 100;
        //cout << love << endl;
        //printf("%.2lf %%\n", double(double(conValue(calValue(n2)))/double(conValue(calValue(n1))))*100);
        //printf("%%\n");
    }
    return 0;
}
