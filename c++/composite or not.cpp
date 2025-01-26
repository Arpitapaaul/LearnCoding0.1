#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {

            cout<<"composite" <<endl;
          break;
        }
        else
        cout<<"prime";
        break;
    }
    
    return 0;
}
