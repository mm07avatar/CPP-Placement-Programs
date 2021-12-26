/**
Problem statement:
Ellie is given the number of visitors at her local theme park on N consecutive days.The number of visitors on the i-th day is Vi. A day is record breaking if it satisfies both of the following conditions:
1) The number of visitors on the day is strictly larger than the number of visitors on each of the previous days.
2) Either it is the last day , or the number of visitors on the day is strictly larger than the number of visitors on the following day.

Note: The very first day could be a record breaking day!
Help Ellie.

Approach 1: Traverse each element and compare current element with previous all elements and the following element. 
Here, Time complexity=O(n)
Overall Time complexity=O(n*n)
As every time current element will change it has to be compared with previous all elements.

Approach 2:
Here we can maintain a 'max' variable which will store maximum elelment before the current elelment.
Thus it reduces time complexity as O(n).
*/

#include "bits/stdc++.h"

using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n+1];
    a[n]=-1;

    for(int i=0;i<n;i++)
        cin>>a[i];

    if(n==1){
        cout<<"1"<<endl;
        return 0;
    }

    int ans=0;
    int mx=-1;
    for(int i=0;i < n;i++){
        if(a[i] > mx && a[i] > a[i+1]){
           ans++; 
        }
        mx=max(mx,a[i]);
    }
    cout<<ans<<endl;
    return 0;
}