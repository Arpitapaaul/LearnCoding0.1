#include<iostream>
using namespace std;
int main()
{
    int Cp, Sp;
    cout<<"enter the cost price"<<endl;
    cin>> Cp;
    cout<<"enter the salling price"<<endl;
    cin>>Sp;
    int profit=0;
    if(Sp>Cp)
    {
     cout<<"saller has made profit"<<endl;
     profit= Sp-Cp;
     cout<<"Profit is "<< profit;
      
    }
    else if(Sp<Cp)
    {
        cout<<"saller has made loss";
    }
    else
    {
        cout<<"no profit no loss";
    }

    return 0;
}