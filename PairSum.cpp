#include "bits/stdc++.h"
using namespace std;

int pairsum(int arr[], int size, int k){
    int low=0, high=size-1;

    while(low<high){
        if(arr[low]+arr[high]==k){
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if(arr[low]+arr[high]>k){
            high--;
        }
        else{
            low++;
        }
    }
    return false;
}

int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n;i++){
        cin>>a[i];   
    }

    cout<<pairsum(a,n,k)<<endl;
    return 0;
}