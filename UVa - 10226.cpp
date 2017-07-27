#include<iostream>
#include<cstdio>
#include<map>

using namespace std;

/*
UVa 10226
Hardwood Species
*/

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        map<string, int>logBook;
        int total=0;
        char name[35];
        while(gets(name)){
            if(logBook.count(string(name))==0){
                logBook[string(name)] = 1;
            }
            else{
                logBook[string(name)]+=1;
            }
            total++;
        }
        map<string, int>::iterator it;
        for(it=logBook.begin(); it != logBook.end(); it++){
            //cout << (*it).first << " " << (*it).second << endl;
            printf("%s %d\n", (*it).first, (*it).second);
        }
    }
    return 0;
}
