#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test_case int t;cin>>t;while(t--)

int main(){
    test_case{
        int a;cin>>a;
        int A[a],B[a];
        for(int i=0;i<a;i++){
            cin>>A[i];
        }
        for(int i=0;i<a;i++){
            cin>>B[i];
        }
        int left=0,right=0,ans=0;
        for(int i=0;i<a;i++){
            if(A[i]!=B[i]) {left=i;break;}
           
        }
        for(int j=a-1;j>=0;j--){
            if(A[j]!=B[j]) {right=j;break;}
        }
        //cout<<left<<" "<<right<<'\n';
        if(right==left) cout<<0<<'\n';
        else
        cout<<right-left+1<<'\n';
    }
    
  
    
}