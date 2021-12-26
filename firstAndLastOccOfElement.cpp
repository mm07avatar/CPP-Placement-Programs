/*
Problem Statement : 
Get the first and last occurrence of an element in the array using recursion.
*/

#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int pos, int key){

    if(pos==n){
        return -1;
    }

    if(arr[pos]==key){
        return pos;
    }

    return firstOcc(arr, n, pos+1, key);
}

int lastOcc(int arr[], int n, int pos, int key){

    if(pos==n){
        return -1;
    }
    
    int restArray = lastOcc(arr, n, pos+1, key);

    if(restArray!=-1){
        return restArray;
    }
    if(arr[pos]==key){
        return pos;
    }
    return -1;
}

int main(){
    int array[] = {1,4,2,5,6,4,7,2};
    cout<<firstOcc(array, 8, 0, 4)<<endl;
    cout<<lastOcc(array, 8, 0, 4)<<endl;
    return 0;
}