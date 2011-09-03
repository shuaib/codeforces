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

    int n;
    map<int, int> xy;
    map<int, vector<int> > c;
    cin>>n;
    int x, r;
    for(int i=0;i<n;i++)
    {
        cin>>x>>r;
        for(int j=x-r;j<=x+r;j++)
        {
            int b = abs(x-j);
            xy[j] = (r*r)-(b*b);
            if(c.find(j)==c.end())
            {
                c[j] = vector<int>();
            }
            c[j].push_back(i);

        }
    }

    int m;
    cin>>m;
    int x1, y1;
    int result=0;
    map<int, int> first;
    for(int i=0;i<n;i++)
    {
        first[i] = -1;
    }
    for(int i=0;i<m;i++)
    {
        cin>>x1>>y1;
        if(xy.find(x1)!=xy.end())
        {
            if((y1*y1)<=xy[x1])
            {
                for(int j=0;j<c[x1].size();j++)
                {
                    if(first[c[x1][j]]==-1)
                    {
                        result++;
                        first[c[x1][j]] = i+1;
                    }
                }
                
            }
        }
    }
    cout<<result<<endl;
    cout<<first[0];
    for(int i=1;i<n;i++)
    {
            cout<<" "<<first[i];
    }


    return 0;
}
