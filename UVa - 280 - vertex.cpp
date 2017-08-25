#include<cstdio>
#include<vector>

using namespace std;

/* UVa 280 */
/* Vertex */

// global declaration
int n; // number of node
vector<int>graph[101]; // declaring graph
bool visited[101] = {false}; // checking is visited or not

// checking graph input
void checkingInput(){
    for(int i=1; i<=n; i++){
        for(int j=0; j<graph[i].size(); j++){
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }
}

void dfs(int startingNode){
    for(int i=0; i<graph[startingNode].size(); i++){
        if(!visited[graph[startingNode][i]]){
            visited[graph[startingNode][i]]=true; // marking as visited
            dfs(graph[startingNode][i]); // again calling dfs with adjacent value
        }
    }
}

int main(){
    while(scanf("%d", &n), n!=0){
        for(int i=0; i<101; i++) graph[i].clear();
        int sNode; // start node of edge
        while(scanf("%d", &sNode), sNode!=0){
            int eNode; // end node of edge
            while(scanf("%d", &eNode), eNode!=0){
                graph[sNode].push_back(eNode);
            }
        }
        //checkingInput();
        int queryNo;
        scanf("%d", &queryNo);
        for(int i=1; i<=queryNo; i++){
            int q;
            for(int i=0; i<=n; i++) visited[i]=false;
            scanf("%d", &q);
            dfs(q);
            vector<int>temp;
            for(int i=1; i<=n; i++){
                if(!visited[i]){
                    temp.push_back(i);
                }
            }
            printf("%d", temp.size());
            vector<int>::iterator t;
            for(t=temp.begin(); t!=temp.end(); t++) printf(" %d", *t);
            printf("\n");
        }
    }
    return 0;
}
