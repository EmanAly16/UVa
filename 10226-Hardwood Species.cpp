#include <bits/stdc++.h>

using namespace std;
map<string,int>mp;
int main() {
    int n,sz;
    cin>>n;
	getchar();
	getchar();
    string s,e;
    while(n--)
    {
        sz=0;
        while(getline(cin,s) && s!="")
        {
            mp[s]++;sz++;
        }
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            cout<<it->first<<" "<<fixed<<setprecision(4)<<((double)it->second/sz)*100<<endl;
        }
        mp.clear();
        if(n)cout<<endl;
    }
	return 0;
}
