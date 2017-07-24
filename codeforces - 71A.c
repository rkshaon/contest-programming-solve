#include<stdio.h>
#include<string.h>

int main(){
    int n, i, len;
    char word[101];
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%s", &word);
        len = strlen(word);
        //printf("%d", len);
        //printf("%s", word);
        if(len>10){
            printf("%c%d%c\n", word[0], len-2, word[len-1]);
        }
        else printf("%s\n", word);
    }
    return 0;
}
