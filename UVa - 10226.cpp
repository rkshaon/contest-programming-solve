#include<iostream>
#include<cstdio>
#include<cstring>
#include<map>

using namespace std;

/*
UVa 10226
Hardwood Species
*/

int main(){
    int test;
    scanf("%d\n\n", &test);
    //getchar();
    while(test--){
        map<string, int>logBook;
        int total=0;
        char name[35];
        while(gets(name)){
            if(strlen(name)==0) break;
            if(logBook.count(string(name))==0){
                logBook[string(name)] = 1;
            }
            else{
                logBook[string(name)]+=1;
            }
            total++;
        }
        //cout << total << endl;
        map<string, int>::iterator it;
        for(it=logBook.begin(); it != logBook.end(); it++){
            //cout << (*it).first << " " << (float(100)/float(total))*float((*it).second) << endl;
            printf("%s %.4f\n", (*it).first.data(), (float(100)/float(total))*float((*it).second));
        }
        if(test>0) printf("\n");
    }
    return 0;
}
