/*
Problem Statement:
Find a unique number in the array using bit manipulation ( using XOR).
*/

#include<iostream> 
using namespace std;
int unique(int arr[], int n){
    int xorsum=0;
    for(int i=0;i<n;i++)
        xorsum=xorsum ^ arr[i];

    return xorsum;
}

int main(){
    int array[]={1,2,4,3,2,1,3};
    cout<<unique(array,7)<<endl;
    return 0;
}