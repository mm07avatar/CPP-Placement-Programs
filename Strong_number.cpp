#include<iostream>
#include<string>
using namespace std;

int fact(int n){
    int f=1;
    if(n==0 || n==1)
        return 1;

    return n*fact(n-1);
}

int main(){
int num,cnt=0,sum=0;
cout<<"Enter a number : "<<endl;
cin>>num;
int n=num;
int number=num;
while(n!=0){
    n/=10;
    cnt++;
}
for(int i=0;i<cnt;i++){
    int rem=num%10;
    sum=sum+fact(rem);
    num=num/10;
}
cout<<"Sum of Factorials of digits of the number : "<<sum<<endl;
if(sum==number){
    cout<<number<<" is a Strong Number.";
}
else{
    cout<<number<<" is not a Strong Number.";
}
return 0;
}

