#include<bits/stdc++.h>
using namespace std;
const int N=1e3;
int graph[N][N];
int main(){
    int node ,edge;
    cin>>node>>edge;
    
    for(int i=0;i<edge;i++){
        int vertex1,vertex2;
        cin>>vertex1>>vertex2;
        graph[vertex1][vertex2]=1;
        graph[vertex2][vertex1] = 1;
    }
    ///space complexity O(n^2);   
    // N=10^6;
}