/*Program to do merge sort using functions*/
#include<iostream>
using namespace std;


void merge(int array[], int l, int mid, int r){
    int i, j, k;
    int n1 = mid - l + 1;//mid-0 +1 i.e left array will contain array[0] to array[mid]
    int n2 = r - mid;//right array will contain array[mid+1] to array[r]
// Create temp arrays
    int L[n1], R[n2];
// Copy data to temp array
    for (i = 0; i < n1; i++)
        L[i] = array[l + i];//array[0] for first iteration
    for (j = 0; j < n2; j++)
        R[j] = array[mid + 1 + j];
// Merge the temp arrays
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2){
        if (L[i] <= R[j]){
             array[k] = L[i];
        i++;
        }
        else{
             array[k] = R[j];
        j++;
            }
        k++;
    }
// Copy the remaining elements of L[]
    while (i < n1){
        array[k] = L[i];
        i++;
        k++;
        }
// Copy the remaining elements of R[]
    while (j < n2){
        array[k] = R[j];
        j++;
        k++;
        }
}


void merge_sort(int array[],int l,int r){
    if(l<r){
        int mid=l+(r-l)/2;
        merge_sort(array,l,mid);
        merge_sort(array,mid+1,r);
        merge(array,l,mid,r);
    }

}



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

    merge_sort(array,0,size-1);

    cout<<endl<<"Elements in the array after sorting : "<<endl;
    print_array(array,size);
    return 0;
}
