/*Program to generate armstrong numbers between a given range*/
#include<iostream>
using namespace std;
int main(){
    int temp,rem,sum,count=0,fnum,lnum,i;
    cout<<"Enter first number of the range : ";
    cin>>fnum;
    cout<<"Enter last number of the range : ";
    cin>>lnum;
    for(i=fnum;i<=lnum;i++){
        temp=i;//value of i given to temp as we require i several times during the loop
        sum=0;//sum initialized to zero so as to calculate sum of digits of every numbers in the range 
        while(temp!=0){
            rem=temp%10;
            sum=sum+rem*rem*rem;
            temp=temp/10;
        } 
        if(i==sum){//comparing for armstrong nature
            if(count==0){
                cout<<"Armstrong numbers in the range are : "<<endl;
            }
            cout<<i<<" is an armstrong number"<<endl;
            count++;
        }
                      
    }
     if(count==0){//executed when no armstrong numbers are found in the range
            cout<<"No armstrong number in the range";
        }  
    return 0;
}