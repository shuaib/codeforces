#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>


using namespace std;

bool isPrime(int n)
{
    if(n%2==0)
        return false;
    else
    {
        for(int i=3;i<=sqrt(n);i=i+2)
        {
            if(n%i==0)
                return false;
        }
    }
    return true;
}

int main()
{
    int n, m;
    cin>>n>>m;
    for(int i=n+1;i<=m;i++)
    {
        if(isPrime(i))
        {
            if(i==m)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
            return 0;
        }

    }
    cout<<"NO"<<endl;
    return 0;
}
