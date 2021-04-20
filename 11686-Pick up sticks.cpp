#include <iostream>
#include <bits/stdc++.h>

using namespace std;
#define ll long long

ll n,m;
queue<int>q;
vector<bool>vis;
vector<ll>dist;
vector<ll>res;
vector<vector<ll>>adj;
map<int,int>mp;
void bfs(){
    while(q.size()){
        int s = q.front();
        q.pop();
        res.push_back(s);
        for(auto u : adj[s]){
            mp[u]--;
            if(!mp[u])
              q.push(u);
        }
    }


}
int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    while(cin>>n>>m && n!=0 && m!=0){
    adj.resize(n);

    for(int i=0;i<m;i++){
        ll u,v;
        cin>>u>>v;
        u--,v--;
        adj[u].push_back(v);
        mp[v]++;
    }
    for(int i=0;i<n;i++){
        if(!mp[i])q.push(i);
    }
    bfs();
    if(res.size()==n){
    for(auto it:res)
        cout<<it+1<<endl;
    }
    else
    cout<<"IMPOSSIBLE"<<endl;
    res.clear();
    adj.clear();
    mp.clear();
    }
    return 0;
}
