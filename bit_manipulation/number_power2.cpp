// Aprogram using bit manipulation to check if number if power of 2 or not


#include<bits/stdc++.h>
using namespace std;

bool help(int x)
{
     // First x in the below expression is
     // for  the case when x is 0
     return x && (!(x & (x - 1)));
}

int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    if(help(n))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}