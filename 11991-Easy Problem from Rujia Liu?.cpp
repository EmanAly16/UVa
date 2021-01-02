#include<iostream>
#include<bits/stdc++.h>
using namespace  std;

int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n,m;
    while(cin>>n){
        cin>>m;
        int a[n];
        map<int,vector<int>>mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]].push_back(i+1);
        }
        int k,r,tmp;
        for(int i=0;i<m;i++){
            cin>>k>>r;
            //cout<<mp[r].size()<<endl;
            if(mp[r].size()>=k){
                cout<<mp[r][k-1]<<endl;
            }
            else
                cout<<0<<endl;
        }
    }
    return 0;
}

