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

    int x, y;
    cin>>x>>y;
    int counter = 0;
    while((x*100)+(y*10)>=220)
    {
        if(counter%2==0)
        {
            int xm = min(2, x);
            int ym = (220-(xm*100))/10;
            if(y>=ym)
            {
                x-=xm;
                y-=ym;
            }
            else
            {
                cout<<"Hanako";
                return 0;
            }
        }
        else
        {
            int xm, ym;
            if(y>=22)
                ym = 22;
            else if(y>=12)
                ym = 12;
            else if(y>=2)
                ym=2;
            else
            {
                cout<<"Ciel";
                return 0;
            }
            xm = (220-(ym*10))/100;
            if(x>=xm)
            {
                x-=xm;
                y-=ym;
            }
        }
        counter++;
    }
    if(counter%2!=0)
    {
        cout<<"Ciel";
    }
    else
        cout<<"Hanako";
    return 0;
}
