#include "bits/stdc++.h"
#include<climits>
using namespace std;

int kadane(int array[], int size){
    int currsum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<size;i++){
        currsum+=array[i];
        if(currsum<0)
            currsum=0;
        
        maxsum=max(maxsum, currsum);
    }
    return maxsum;
}

int main(){
    int num;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++)
        cin>>arr[i];

    int wrapsum,nonwrapsum;
    nonwrapsum=kadane(arr,num);
    int totalsum=0;
    for(int i =0; i <num;i++){
        totalsum+=arr[i];
        arr[i]= -arr[i];
    }
    wrapsum=totalsum+kadane(arr,num);
    cout<<max(wrapsum,nonwrapsum)<<endl;

    return 0;

}