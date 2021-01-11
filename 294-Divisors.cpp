#include<iostream>
#include<bits/stdc++.h>
using namespace  std;
vector<int>v;
map<int,int>mp;
void divisorCount(int a,int b)
{
    for(int i=a;i<=b;++i)
    {
        int cnt=0,j;
        for(j=1; j*j<i;++j)
        {
            if (i%j== 0)
                cnt+=2;
        }
         if(j*j==i)
          cnt++;
        v.push_back(cnt);
        if(mp[cnt]==0)
        mp[cnt]=i;
    }
}
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n,a,b;
    cin>>n;
    while(n--){
        cin>>a>>b;
        divisorCount(a,b);
        int ind=*max_element(v.begin(),v.end());
        cout<<"Between "<<a<<" and "<<b<<", "<<mp[ind]<<" has a maximum of "<<ind<<" divisors."<<endl;
//        for(auto it:v)
//            cout<<it<<endl;
        v.clear();
        mp.clear();
    }

    return 0;
}
