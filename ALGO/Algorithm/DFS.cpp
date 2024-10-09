#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
vector<int>graph[N];
bool vis[N];
void dfs(int vertex){
    cout<<vertex<<" ";
    vis[vertex]=true;
    for(int child:graph[vertex]){
        if(!vis[child])
        dfs(child);
    }


}
int main(){
    int node, edge;cin>>node>>edge;
    for(int i=0;i<edge;i++){
        int x,y;cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);


    }
    dfs(1);
}