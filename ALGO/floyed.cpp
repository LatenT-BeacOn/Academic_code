#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
vector<int>graph[N];
bool visited[N];
void dfs(int vrtx){
    // take action on vertex after entiring entering the child node
    cout<<vrtx<<'\n';
    visited[vrtx]=true;
    for(int child:graph[vrtx]){
        cout<<"parent"<<vrtx<<" "<<"child"<<child<<'\n';
       //take action on child before entiring the child node
        if(!visited[child])
        dfs(child);


        //take action on child after entring the child node;

    }
    //take action on vertx before exiting the vertex;


}

int main(){
    int node,edge;
    cin>>node>>edge;
    for(int i=0;i<edge;i++){
        int vrtx1,vrtx2;
        cin>>vrtx1>>vrtx2;
        graph[vrtx1].push_back(vrtx2);
        graph[vrtx2].push_back(vrtx1);
    } 
    dfs(1);
}



