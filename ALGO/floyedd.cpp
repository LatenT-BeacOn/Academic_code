#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
vector<int>graph[N];
int main(){
    int v,e;
    cin>>v>>e;

    for(int i=0;i<e;i++){
        int vetrx1,vertex2;
        cin>>vetrx1>>vertex2;
        graph[vetrx1].push_back(vertex2);
       // graph[vetrx1].push_back(vertex2);


    }
}