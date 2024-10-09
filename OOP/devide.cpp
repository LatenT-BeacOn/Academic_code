#include<bits/stdc++.h>
using namespace std;
struct devide
{
     int leftIndex;
     int rightIndex;
     int maxValue;

     
};
devide ans(int x, int y, int m)
{
devide d;
d.leftIndex = x;
d.rightIndex = y;
d.maxValue = m;
return d;
}

devide maxsubarry(int A[],int low,int mid ,int high){
    devide d;
    int leftsum = INT_MIN;
    int rigtsum = INT_MIN;
    int leftIndex,rightIndex ;
    int sum=0;
    for(int i=mid;i>=low;i--){
        
        sum+=A[i];
        if(sum>=leftsum){
            leftsum=A[i];
            leftIndex=i;
        }
    }
    sum=0;
    for (int i = mid; i<=high; i++)
    {

        sum += A[i];
        if (sum >= rigtsum)
        {
            rigtsum = A[i];
            rightIndex = i;
        }
    }

    return ans(leftIndex,rightIndex,leftIndex+rightIndex);
}

devide 


int main(){
    int A[]={-2,-5,6,-2,-3,1,5};
    
   


}