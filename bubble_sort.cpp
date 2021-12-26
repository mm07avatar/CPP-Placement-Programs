/*Program to do bubble sort with the help of user defined functions*/
#include<iostream>
using namespace std;
//Function for swaping
void swap(int *n1,int *n2){
    int temp=*n1;
    *n1=*n2;
    *n2=temp;
}
//Function for bubble sort
void bubble_sort(int num[],int n){
    int i,j;
    for(i=0;i<n-1;i++){
    /*n-1 refers one iteration less than the size,
    eg.if 5 elements in the array 4 iterations will be done during sorting*/
        for(j=0;j<n-i-1;j++){
            /*n-i-1 reduces inner iteration as after each iteration
            brought by i one element will be sorted*/
            if(num[j]>num[j+1]){//comparing index j value with index (j+1) value
            swap(&num[j],&num[j+1]);//calling swap function
            }
        }
    }
}
//function to print the sorted array
void print_num(int num[],int size){
    int i;
    for(i=0;i<size;i++){
        cout<<num[i]<<" ";
    }
}

int main(){
    int num[100],size,i;
    cout<<"Enter the number of elements in the array : ";
    cin>>size;
    cout<<"Enter "<<size<<" numbers in the array : "<<endl; 
    for(i=0;i<size;i++){
        cin>>num[i];
    }

    bubble_sort(num,size);//calling bubble_sort function
    cout<<"Sorted array : "<<endl;
    print_num(num,size);//calling print_num function
    return 0;
}

//code by Mukesh Manohar
