/*Program to do radix sort using functions*/
#include<iostream>
using namespace std;


int max_element(int array[],int size){
    int max=array[0],i;
    for(i=0;i<size;i++){
        if(max<array[i]){
            max=array[i];
        }
    }
    return max;
}

void count_sort(int array[],int size,int pos){
    int bucket[10]={0};
    int arr[size];


    for(int i=0;i<size;i++){
    bucket[(array[i]/pos)%10]++;
    }
    for(int i=1;i<=10;i++){
        bucket[i]+=bucket[i-1];
    }
    for(int i=size-1;i>=0;i--){
        arr[bucket[(array[i]/pos)%10]-1]=array[i];
        bucket[ (array[i]/pos)%10 ]--;
    }
    for(int i=0;i<size;i++){
        array[i]=arr[i];
    }
}

void radix_sort(int array[],int size){
    int pos,max=max_element(array,size);
    for(pos=1;max/pos>0;pos=pos*10){
        count_sort(array,size,pos);
    }
}

//Function to print array
void print_array(int array[],int size){
    int i;
    for(i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
}



int main(){
    int array[100],size,i;
    cout<<"Enter the number of elements in the array : ";
    cin>>size;
    cout<<"Enter "<<size<<" elements in the array : ";
    for(i=0;i<size;i++){
        cin>>array[i];
    }
    cout<<"Elements in the array before sorting : ";
    print_array(array,size);

    cout<<endl<<"Elements in the array after sorting : ";
    radix_sort(array,size);
    print_array(array,size);
}
