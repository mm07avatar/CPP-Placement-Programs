/*program to check adding digits of a number and whether reverse of the number is equal to it or not*/
/*Program to check whether a number is palindrome or not*/
/*Program to check for an Armstrong number*/
#include<iostream>
using namespace std;
int main(){//main function
    int num,orig,rev=0,rem,dig=0;
    float sum=0;
    cout<<"Enter your number : ";
    cin>>num;
    orig=num;//storing original number in another variable
    while(num>0){
        rem=num%10;//getting remainder of the number
        dig=rem*rem*rem+dig;//armstrong checking logic
        rev=rev*10+rem;
        sum=sum+rem;
        num=num/10;//removing the last remainder from the number
    }
    //adding digits of the number
    cout<<"Sum of digits in the number : "<<sum<<endl;
    //Armstrong or not
    if(dig==orig){
        cout<<"Given number is Armstrong number";
    }

    cout<<"Reversed number is : "<<rev<<endl;
    //comparing the numbers
    if(orig==rev){
        //if same the number is palindrome
        cout<<"Original and reversed numbers are same\nTherefore, it is a palindrome number";
    }
    else{
        cout<<"Original and reversed numbers are not same";
    }
    return 0;
}