#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int count=0;
    cout <<"given number table is"<<endl;
    
    for(int i=n;i<=n*10;i=i+n)
    { 
        count++;
       cout<<n<<"*"<<count<<"="<<i<<endl;
    }
    return 0;
}
