#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n";
    cin>>n;
    

    for(int i=n-1;i>=1;i--)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
        break;
        }
    }
}