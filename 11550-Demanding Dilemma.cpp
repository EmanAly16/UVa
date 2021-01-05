#include<iostream>
#include<bits/stdc++.h>
using namespace  std;

int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n,m,t;
    cin>>t;
    while(t--){
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    set<string>s;
    int cnt,ans=0;
    for(int j=0;j<m;j++)
    {
       cnt=0;string str="";
       for(int i=0;i<n;i++){
        //  cout<<i<<","<<j<<' ';
         if(a[i][j]==1)
           {
            cnt++;
            str+=(to_string(i));
           }
        }
        if(cnt==2)
            s.insert(str);
       
     }
     if(s.size()>=m)
        cout<<"Yes"<<endl;
     else
        cout<<"No"<<endl;
     ans=0;
    }
    return 0;
}

