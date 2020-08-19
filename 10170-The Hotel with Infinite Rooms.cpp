#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long s,d,sum;

    while(cin >> s >> d)
    {
        vector<long long> v,res;
        sum = 0;
        while(sum < d)
        {
            sum += s;
            v.push_back(sum);
            res.push_back(s);
            s++;
        }
        cout << res[lower_bound(v.begin() , v.end() , d) - v.begin()] << endl;
    }
    return 0;
}
