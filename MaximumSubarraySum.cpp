#include "bits/stdc++.h"
#include<climits>
using namespace std;

int main(){
    int num;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++)
        cin>>arr[i];
    

    //Approach 1: Bruteforce approch : O(n^3)

    int maxSum=INT_MIN;
    // for(int i=0;i<num;i++){
    //     for(int j=i;j<num;j++){
    //         int sum=0;
    //         for(int k=i;k<=j;k++){
    //             sum=sum+arr[k];
    //         }
    //         maxSum=max(maxSum, sum);
    //     }
    // }

    //Approach 2 : Cummulative Sum Approach : O(n^2)

    // int currsum[num+1];
    // currsum[0]=0;

    // for(int i=1; i<=num; i++){
    //     currsum[i]=currsum[i-1]+arr[i-1];
    // }

    // for(int i=1; i<=num; i++){
    //     int sum=0;  
    //     for(int j=0; j<i; j++){
    //         sum = currsum[i] - currsum[j];
    //         maxSum = max(sum, maxSum);
    //     }
    // }

    //Approach 3 : Kadane's Algorithm : O(n)

    int currsum=0;
    for(int i=0;i<num;i++){
        currsum+=arr[i];
        if(currsum<0){
            currsum=0;
        }
        maxSum=max(maxSum, currsum);
    }
    cout<<maxSum<<endl;
    return 0;
}