#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n";
    cin>>n;
    int c= 0;
    cout<<"table of given num"<<endl;
    for(int i=n;i<=n*10;i=i+n)

    {
        c++;
        cout<<n<< "*" <<c<<"="<<i<<endl;
        
    }

}