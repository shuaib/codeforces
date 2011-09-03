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
    int n; cin>>n;
    int f[100001]; for(int i=0;i<100001;i++) f[i] = -100000;
    for(int i=0;i<n;i++)
    {
        int x, y;
        cin>>x>>y;
        int r = 0;
        for(int j=1;j*j<=x;j++)
        {
            if(x%j==0)
            {
                int p = x/j;
                int q = j;
                if(f[p]<i-y)
                    r++;
                f[p] = i;
                if(f[q]<i-y)
                    r++;
                f[q] = i;
            }
        }
        cout<<r<<endl;
    }
    return 0;
}
