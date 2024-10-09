#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
vector<int>graph[N];
bool vis[N];
void bfs(int vertex){
    queue<int>q;
    q.push(vertex);
    while(!q.empty()){
        int x=q.front();
        q.pop(); vis[vertex]=true;
        cout<<x<<" ";
        for(auto child:graph[x]){
            if(!vis[child]){
                q.push(child);
                vis[child]=true;
            }
        }
    }
}

int main(){
    int node,edge;cin>>node>>edge;
    for(int i=0;i<edge;i++){
        int x,y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
        

    }
    bfs(1);


}