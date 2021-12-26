/*
Problem statement:
Given a non-empty array containing positive and negative numbers. Find the smallest psoitive number that is missing in the array.

Example:
A[]={0,-9,2,-5,5}
Output: 2
*/
#include "bits/stdc++.h"
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    sort(a,a+n);
    int ans=-1;

    for(int i=0;i<n;i++){
        if(a[i]>=0){
            if(a[i+1]-a[i]!=1){
                ans=a[i]+1;
                break;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}