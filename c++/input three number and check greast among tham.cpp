#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    cout<<"Enter the  value three number " ;
    cin>>n1 >>n2>>n3;
    if(n1>n2)
    {
        if(n1>n3)
        {
          cout<<"n1 is greast";
        }
        else
        {
            cout<<"n3 is greast";
        }
    }
    else if(n2>n1)
    {
        if(n2>n3)
        {
            cout<<"n2 is greast";
        }
        else 
        cout<<"n3 is graest";
    }
    else
    cout <<"n3 is greast";
    return 0;

     

    }