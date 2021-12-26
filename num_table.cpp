/*Program to find the table of entered number to a specified time.*/
#include<iostream>
using namespace std;
int main(){
    int num,i,upto;
    cout<<"Enter the number to find its table : ";
    cin>>num;//asking for input of number
    cout<<"Enter the term upto which table is to be printed for "<<num<<" : ";
    cin>>upto;//asking for the term upto which table is to be printed
    cout<<"Here is your table : "<<endl;
    for(i=1;i<=upto;i++){//loop for pring the table
        cout<<num<<" X "<<i<<"="<<num*i<<endl;
    }
return 0;
}