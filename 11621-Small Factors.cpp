#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<long long> res(1,1);
void smallfact(){
    int i=0, j=0;
    while(res.back() <= 2147483648){
        long long s = min(res[i]*2,res[j]*3);
        res.push_back(s);
        if(res[i]*2==s) i++;
        if(res[j]*3==s) j++;
    }
}
int main()
{
    long long m;
    smallfact();

    while(cin>>m &&m)
      cout<<*lower_bound(res.begin(),res.end(),m)<<endl;
    return 0;
}
