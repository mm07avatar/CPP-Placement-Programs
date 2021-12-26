/*Program to find prime numbers from given range*/
#include<iostream>//header file
using namespace std;
int main(){    //main function
    int start_num,last_num,i,j,count=0;
    cout<<"Enter starting range number :";
    cin>>start_num;
    cout<<"Enter the last range number : ";
    cin>>last_num;
    for(i=start_num;i<=last_num;i++){ 
        count=0;
        for(j=2;j<i;j++){//j!=1 and !(j<=start_num) as 1 and number itself are factors of all numbers
            if(i%j==0){
               count++;
               break;//breaks the loop once entered in it
            }
    }
    if(count==0){//printing prime numbers between the range
        cout<<i<<" is a prime number"<<endl;
    }
    }
    
    return 0;
}