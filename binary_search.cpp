/*Program to to binary search using a function*/
#include<iostream>
using namespace std;


//function to do binary search
int binary_search(int array[],int l,int r,int data){//l=leftmost index=0,r=rightmost index=size-1
    while(l<=r){
        int mid=l+(r-l)/2;
        if(array[mid]==data){
            return mid;//element found then return mid position
        }
        else if(array[mid]>l){
            r=mid-1;//rightmost index shifted one position less than the middle
        }
        else{
            l=mid+1;//leftmost index shifted one position more than the middle
        }
    }
    //returning false if element not found
    return -1;
}


 int main(){
     int array[100],size,data,i;
     cout<<"Enter the number of elements in the array : ";
     cin>>size;
     cout<<"Enter "<<size<<" numbers in the array : ";
     for(i=0;i<size;i++){
     cin>>array[i];
     }
     cout<<"Enter the data to be searched : ";
     cin>>data;
     int result=binary_search(array,0,size-1,data);//function to call binary_search function
     if(result==-1){
         cout<<"Element not found";
     }
     else{
         cout<<"Element found at position "<<result;
     }
     
 }