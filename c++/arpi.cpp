#include<iostream>
using namespace std;
int main()
{
    int n;
    bool isComposite = false;
    cout << "enter the value of n: ";
    cin >> n;
    for(int i = 2; i <= n / 2; i++)
    {
        if(n % i == 0)
        {
            isComposite = true;
            break;
        }
    }
    if(isComposite)
        cout << "composite";
    else
        cout << "prime";
    
    return 0;
}