#include<iostream>
using namespace std;

int divisible(int n, int a, int b){
    int c1=n/a;
    int c2=n/b;

    int c3=n/(a*b);

    return c1+c2-c3;
}

int main(){
    int num, n1, n2;
    cin>>num>>n1>>n2;
    cout<<divisible(num,n1,n2)<<endl;
    return 0;
}