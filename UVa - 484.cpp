#include<iostream>
#include<cstdio>
#include<map>
#include<vector>

using namespace std;

int main(){
    map<int, int>m;
    vector<int>v;
    int n;
    while(scanf("%d", &n)!=EOF){
        if(m.count(n)==0){
            m[n]=1;
            v.push_back(n);
        }
        else{
            m[n]+=1;
        }
    }
    //map<int, int>:: iterator it;
    //cout << v.size() << endl;
    //for(it=m.begin(); it != m.end(); it++) cout << (*it).first << " " << (*it).second << endl;
    //cout << v.size() << endl;
    for(int i=0; i<v.size(); i++) printf("%d %d\n", v[i], m[v[i]]);
    return 0;
}
