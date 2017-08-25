#include<cstdio>
#include<vector>

using namespace std;

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
            visited[startingNode]=true; // marking as visited
            dfs(graph[startingNode][i]); // again calling dfs with adjacent value
        }
    }
}

int main(){
    while(scanf("%d", &n), n!=0){
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
            scanf("%d", &q);
            dfs(q);
            //int c=0;
            vector<int>temp;
            for(int i=1; i<=n; i++){
                if(!visited[i]){
                    //c++;
                    //printf("%d\n", i);
                    temp.push_back(i);
                }
            }
            //printf("%d", c);
            printf("%d", temp.size());
            /*for(int i=1; i<=n; i++){
                if(!visited[i]) printf(" %d", i);
            }*/
            vector<int>::iterator t;
            for(t=temp.begin(); t!=temp.end(); t++) printf(" %d", t);
            printf("\n");
        }
        //graph.clear();
    }
    return 0;
}
