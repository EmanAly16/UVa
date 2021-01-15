#include<bits/stdc++.h>
using namespace  std;
#define N 50001
vector<int>vc;
vector<int>adj;
//int cnt=0;
int maxx=-1,pos;
vector<bool>vis;
int  dfs(int node){
    vis[node]=true;
        int cnt =0 ;
        if(adj[node]!=-1 && !vis[adj[node]] )
            {
              cnt+=1+dfs(adj[node]);
            }
    vis[node]=false;
    vc[node]=cnt;
    return vc[node];
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int t,n,u,v,k=1;
    cin>>t;
    while(t--){
        cin>>n;
        adj.assign(n+1, -1);
        vc.assign(n+1,-1);
        vis.assign(n+1 , 0);
        for(int i=0;i<n;i++){
            cin>>u>>v;
            adj[u]=v;
        }
        for(int i=1;i<=n;i++){
            //cnt=0;
            if(vc[i]==-1)
                dfs(i);
           if(vc[i]>maxx){
                maxx=vc[i];
                pos=i;
               // cout<<pos<<endl;
            }
        }
        printf("Case %d: %d\n" ,k , pos );
        maxx=-1;
        k++;
     }
    return 0;
}
