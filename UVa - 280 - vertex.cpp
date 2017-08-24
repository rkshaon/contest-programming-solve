#include<cstdio>
#include<vector>

using namespace std;

int main(){
    int n;
    while(scanf("%d", &n), n!=0){
        int graph[n+1][n+1] = {0}; // initialized zero
        int startNode;
        int endNode;
        /*
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                printf("%d ", graph[i][j]);
            }
            printf("\n");
        }
        */
        while(scanf("%d", &startNode), startNode!=0){
            //graph[startNode][0]=n; // first value contains the total node number
            while(scanf("%d", &endNode), endNode!=0){
                graph[startNode][endNode]=1; // replaced by one for connection
                //graph[startNode][0]--;
            }
        }
        /*
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                printf("%d ", graph[i][j]);
            }
            printf("\n");
        }
        */
        int queryNo;
        scanf("%d", &queryNo);
        int q;
        while(queryNo--){
            scanf("%d", &q);
            int c=0;
            for(int i=1; i<=n; i++){
                if(graph[q][i]==0) c++; // count total no edge node
            }
            //printf("%d", graph[q][0]);
            printf("%d", c);
            for(int i=1; i<=n; i++){
                if(graph[q][i]==0) printf(" %d", i); // printing no edge node
            }
            printf("\n");
        }
    }
    return 0;
}
