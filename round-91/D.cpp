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
    int n, k;
    string s;
    cin>>n>>k;
    cin>>s;
    for(int i=0;i<s.size()-1&&k;)
    {
        if(s[i]=='4' && s[i+1]=='7')
        {
            if(i%2==0)
            {
                s[i+1] = '4';
                i++;
            }
            else
            {
                s[i] = '7';
                if(s[i-1]=='4' && k>1)
                {
                    if(k%2==0)
                        s[i] = '4';
                    cout<<s<<endl;
                    return 0;
                }
                else
                    i+=2;
            }
            --k;
        }
        else
        {
            i++;
        }
    }
    cout<<s<<endl;
    return 0;
}
