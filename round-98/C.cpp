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

bool compare(pair<int, int> a, pair<int, int> b)
{
    if (a.first<b.first)
        return true;
    return false;
}

int main()
{
    int n;
    cin>>n;
    vector<pair<int, int> > v;
    for(int i=0;i<n;i++)
    {
        int a, b;
        cin>>a>>b;
        v.push_back(make_pair(a, b));
    }

    sort(v.begin(), v.end(), compare);
    int count = 0;
    int largest_end = 0;
    for(int i=0;i<v.size();i++)
    {
        pair<int, int> p = v[i];
        if(p.second<largest_end)
        {
            count++;
        }
        if(p.second>largest_end)
            largest_end = p.second;
    }
    cout<<count<<endl;

    return 0;
}
