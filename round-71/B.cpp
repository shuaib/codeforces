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

bool check(pair<int, int> a, pair<int, int> b)
{
    if(a.first<b.first)
        return true;
    else if(a.first == b.first)
    {
        if(a.second<b.second)
            return true;
        else
            return false;
    }
    return false;
}
int main()
{
    int n, m, k, t;
    cin>>n>>m>>k>>t;

    vector<pair<int, int> > w;
    vector<pair<int, int> > q;

    int a, b;
    for(int i=0;i<k;i++)
    {
        cin>>a>>b;
        w.push_back(make_pair(a, b));
    }
    sort(w.begin(), w.end(), check);
     for(int i=0;i<t;i++)
    {
        bool flag = true;
        cin>>a>>b;
        q.push_back(make_pair(a, b));
        int counter = 0;
        for(int j=0;j<w.size();j++)
        {
            if(make_pair(a, b) == w[j])
            {
                cout<<"Waste"<<endl;
                flag = false;
                break;

            }
            else if(check(w[j], make_pair(a, b)))
            {
                counter++;
            }
            else
                break;
        }
        long long t = ((a-1)*m) + b;
        t-=counter;
        if(flag)
        {
        switch (t%3)
        {
            case 0:
                cout<<"Grapes"<<endl;
                break;
            case 1:
                cout<<"Carrots"<<endl;
                break;
            case 2:
                cout<<"Kiwis"<<endl;
                break;
        }
        }
    }

    return 0;
}
