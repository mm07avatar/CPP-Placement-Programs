#include<iostream>
using namespace std;
class linear_search
{
private:
    int a[100],n;
    public:
    void read_data()
    {
        cout<<"Enter the size of list : ";
        cin>>n;
        cout<<"Enter numbers into list : ";
        for(int i=0;i<n;i++)
            cin>>a[i];
    }
    void lsearch(){
    int val,pos,i;
    cout<<"Enter a number to search in the list : ";
    cin>>val;
    pos=-1;
    for(i=0;i<n;i++)
        {
            if(a[i]==val){
                pos=i;
                break;
            }
        }

    if(pos==-1)
        cout<<"Given number is not in the list\n";
    else
        cout<<"Given number is found at "<<pos<<" index position\n";
}
int rs(int x,int s){
if(a[s]==x)
    return(s);
    else
        if(s==n-1)
        return(-1);
    else
        return(rs(x,s+1));
}
 void rsearch(){
    int val,pos,i;
    cout<<"Enter a number to search in the list : ";
    cin>>val;
    pos=rs(val,0);
    if(pos==-1)
        cout<<"Given number is not in the list\n";
    else
        cout<<"Given number is found at "<<pos<<" index position\n";
}
};
int main()
{

    linear_search ls;
    linear_search ls;
    ls.read_data();
    ls.lsearch();
    ls.rsearch();
}
