#include<bits/stdc++.h>

using namespace std;

int main(){
    int hh, mm;
    int a;
    while(scanf("%d:%d", &hh, &mm)!=EOF){
        scanf("%d", &a);
        mm = mm + a;
        if(mm>=60){
            hh = hh + (mm/60);
            mm = mm%60;
        }
        if(hh>=24){
            hh = hh%24;
        }
        printf("%02d:%02d\n", hh, mm);
    }
    return 0;
}
