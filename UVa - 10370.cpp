#include<cstdio>

using namespace std;

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        //printf("Checking\n");
        int n;
        scanf("%d", &n);
        int grade[n];
        double totalGrade=0;
        for(int i=0; i<n; i++){
            scanf("%d", &grade[i]);
            totalGrade+=grade[i];
        }
        //printf("%lf\n", totalGrade);
        double avgGrade = totalGrade/n;
        //printf("%.3lf\n", avgGrade);
        int aboveAvg=0;
        for(int i=0; i<n; i++){
            if(grade[i]>avgGrade) aboveAvg++;
        }
        //printf("%d\n", aboveAvg);
        printf("%.3lf%%\n", (double(aboveAvg)/double(n))*100);
    }
    return 0;
}
