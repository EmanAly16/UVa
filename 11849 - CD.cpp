#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,a;
    while(cin>>n>>m){
            if(n==0&&m==0)break;
    set<long long>st;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        st.insert(a);
    }
    for(int i=0;i<m;i++)
    {
        cin>>a;
        st.insert(a);
    }
    cout<<m+n-st.size()<<endl;
    }
    return 0;
}
