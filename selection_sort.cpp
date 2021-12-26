/*Program to do selection sorting using function*/
#include<iostream>
using namespace std;

//function to do swapping
void swap(int *i,int *j){
    int temp=*i;
    *i=*j;
    *j=temp;
}

//function to do selection sorting
void selection_sort(int array[],int size){
int i,j,min_index;
for(i=0;i<size-1;i++){//size-1 as one index will be kept as minimum index i.e 0th index
    for(j=i+1;j<size;j++){//i+1 as one index is fixed at 0th position making latter a subarray of rest elements
        if(array[j]<array[i]){
        swap(&array[j],&array[i]);//calling swap function
        }
    }
}
}


//print result of selection sort
void print(int array[],int size){
    cout<<"Elements after sorting : ";
    for(int i=0;i<size;i++){
      cout<<array[i]<<" ";
    }
}


int main(){
    int array[100],size,i;
    cout<<"Enter the number of elements in the array : ";
    cin>>size;
    cout<<"Enter "<<size<<" numbers in the array : ";
    for(i=0;i<size;i++){
        cin>>array[i];
    }
    selection_sort(array,size);//calling selection_sort function
    print(array,size);//calling print function
    return 0;
}