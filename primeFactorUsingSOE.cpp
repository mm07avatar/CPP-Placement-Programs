/*
Problem Stetement :
Sieve of Eratosthenes is method of finding the prime numbers upto 
a given number where all the multiples of numbers are eliminated
and rest left elements are required prime numbers.

Using the above method we can find the prime factors of a given number.
*/

#include<iostream>
using namespace std;

void primeFactor(int n){
    int spf[100]={0}; //spf=smallest prime factor
    for(int i=2;i<=n;i++){
                spf[i]=i;
    }
    for(int i=2;i<=n;i++){
        if(spf[i]==i){
            for(int j=i*i;j<=n;j+=i){
                if(spf[j]==j)
                    spf[j]=i;
            }
        }
    }
    while(n!=1){
        cout<<spf[n]<<" ";
        n=n/spf[n];
    }
}

int main(){
    int n;
    cin>>n;
    primeFactor(n);
    return 0;
}