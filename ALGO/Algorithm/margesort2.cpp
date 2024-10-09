#include<bits/stdc++.h>
using namespace std;
void marge(int A[],int l,int mid,int r){
    int n1=mid-l+1,n2=r-mid;
    int a[n1],b[n2];
    for(int i=0;i<n1;i++){
        a[i]=A[l+i];
    }
    for(int i=0;i<n2;i++){
        b[i]=A[mid+i+1];
    }

    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            A[k]=a[i];
            i++,k++;
        }
        else {
            A[k]=b[j];
            j++,k++;
        }
    }
    while(i<n1){
        A[k]=a[i];
        i++,k++;
    }
    while(j<n2){
        A[k]=b[j];
        j++,k++;
    }


}

void margesort(int A[],int l,int r){
    if(l<r) {
        int mid=(l+r)/2;
        margesort(A,l,mid);
        margesort(A,mid+1,r);

        marge(A,l,mid,r);

    }
}

int main(){
    int A[5]={7,3,5,2,1};
    margesort(A,0,4);
    for(int i=0;i<5;i++){
        cout<<A[i]<<" ";
    }
}