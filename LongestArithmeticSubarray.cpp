/*
This question was asked in google kickstart.
An arithematic array is an array that contains at least two integers and the differences between consecutive inetgers are equal.
Example: 
[9,10] : 9-10=1
[3,3,3] : 3-3 = 0; 3-3 = 0
[9,7,5,3] : 9-7=7-5=5-3=2

Problem statement:
Saraswati has an array of N non-negative inetegers. The i-th integer of the array is Ai. She wants to choose a contiguous aithematic aubarray from her array that has the maximum length. Help her.
*/

#include "bits/stdc++.h"

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
        cin>>a[i];

    int ans=2;
    int prediff=a[1]-a[0];
    int j=2;
    int curr=2;

    while(j<n){
        if(prediff==a[j]-a[j-1])
            curr++;
        else{
            prediff=a[j]-a[j-1];
            curr=2;
        }
        ans=max(ans,curr); 
        j++; 
    }
    cout<<ans<<endl;
    return 0;
}

