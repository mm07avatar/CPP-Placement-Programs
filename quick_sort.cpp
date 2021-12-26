/*Program to do quick sort using functions*/
#include<iostream>
using namespace std;



//Function for swapping
void swap(int *i,int *j){
    int temp=*i;
    *i=*j;
    *j=temp;
}



//Function to partition the array into sub array when pivot element is found
int partition(int array[],int start,int end){
      int pivot=start;//Suppose starting element as pivot element
      int i=start;
      int j=end;
      //only when starting index is less than ending index
      while(i<j){
          while(array[i]<=array[pivot]){//if element is smaller than pivot element,increment its position by 1
              i++;
          }
          while(array[j]>array[pivot]){//if element is greater than pivot element,decrement its position by 1
              j--;
          }
         if(i<j)//swap after start and end index are found
              swap(&array[i],&array[j]);
      }
      swap(&array[pivot],&array[j]); //swap when start index>end index
    return end;
}


//Function for quick sort
void quick_sort(int array[],int start,int endn){
    int part;
    if(start<endn){
        //calling partition function
        part=partition(array,start,endn);//storing returned value of partition function to part variable
        quick_sort(array,start,part-1);//recursive,calling quick_sort function for left subarray
        quick_sort(array,part+1,endn);//recursive,calling quick_sort function for right subarray
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
    cout<<"Elements in the array before sorting : "<<endl;
    print_array(array,size);
    quick_sort(array,0,size-1);

    cout<<endl<<"Elements in the array after sorting : "<<endl;
    print_array(array,size);//calling print_array function
    return 0;

}
