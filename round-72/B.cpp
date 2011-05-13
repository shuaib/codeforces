#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    long n;
    vector<long> v;
    cin>>n;
    long long t;
    long long p;
    cin>>p;
    long count=1;
    for(long i=1;i<n;i++)
    {
        cin>>t;
        if(t==p)
        {
            count++;
        }
        else
        {
            v.push_back(count);
            count=1;
        }
        p=t;
    }
    v.push_back(count);
    long long result = 0;
    for(int i=0;i<v.size();i++)
    {
        for(int j=2;j<=v[i];j++)
        {
            result+=1+v[i]-j;
        }
    }
    cout<<result+n;

    return 0;
}
