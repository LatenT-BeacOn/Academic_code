#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
vector<int>graph[N];
bool vis[N];
int dis[N], par[N];
void bfs(int vertex){
    queue<int>q;
    q.push(vertex);
   
    while(!q.empty()){
        int x=q.front();
        dis[1]=0;
        q.pop();
        //cout<<x<<" ";
        vis[x]=true;
        for(int child:graph[x]){
            if(!vis[child]){
                q.push(child);
                par[child]=x;
                dis[child]=dis[x]+1;
                vis[child]=true;
            }
        }

    }

    

}




int main(){
    int node ,edge;
    cin>>node>>edge;
    for(int i=0;i<edge;i++){
        int x,y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);

    }
    bfs(1);
    for(int i=1;i<=node;i++){
        cout<<dis[i]<<" ";
    }
    cout<<"\n";
    int f=4;
    while (f!=1)
    {
       cout<<f<<" ";
       f=par[f];
    }
    cout<<1<<'\n';
    
}