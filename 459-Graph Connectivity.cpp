#include <bits/stdc++.h>

using namespace std;
vector<vector<int>>adj;
vector<bool>vis;


void dfs(int u){
   // cout<<u +1<<endl;
    vis[u]=1;
    for(auto el : adj[u])
        if(!vis[el])
            dfs(el);
}

int main(){
    int n,m,t;
    cin>>t;
    while(t--){
    char tmp;
    cin>>tmp;
    int n=tmp-'A';
    n++;
    adj.resize(n);
    vis.resize(n);
    string in;
    cin.ignore();
    while(getline(cin,in) && in!=""){
        char u=in[0],v=in[1];
        adj[u-'A'].push_back(v-'A');
        adj[v-'A'].push_back(u-'A');
    }

    int c=0;
    for(int i=0;i<n;i++)
        if(!vis[i])
             {dfs(i);c++;}
    cout<<c<<endl;
    if(t!=0)cout<<endl;
    adj.clear();
    vis.clear();
    }
}
