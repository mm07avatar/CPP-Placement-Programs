/*Program to find whether a number is prime or not*/
#include<iostream>//header file
using namespace std;
int main(){    //main function
    int num,i,count=0;
    cout<<"Enter a Number : ";
    cin>>num;
    for(i=2;i<num;i++){ //i!=1 and !(i<=num) as 1 and number itself are factors of all numbers
       if(num%i==0){
           count++;
           break;//breaks the loop once entered in it
       }
    }
    if(count==0){
        cout<<num<<" is a prime number"<<endl;
    }
    else{
        cout<<num<<" is not a prime number"<<endl;
    }
    return 0;
}