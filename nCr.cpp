#include<iostream>
using namespace std;

int factorial(int num){
    int fact=1;
    for(int i=2;i<=num;i++){
        fact*=i;
    }
    return fact;
}

int main(){
    int n,r;
    cout<<"Enter n and r values: ";
    cin>>n>>r;
    cout<<factorial(n)/(factorial(r)*factorial(n-r));
    return 0;
}