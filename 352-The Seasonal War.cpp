#include<iostream>
#include<bits/stdc++.h>
using namespace  std;
char arr[27][27];
int t;
bool valid(int r,int c){
   if(r>=0 &&r<t &&c>=0&& c<t)
      return true;
   else
      return false;

}
int cnt=0;
int vis[27][27];
void cntcells(int r,int c){
    if(!valid(r,c)||arr[r][c]=='0'||vis[r][c]==1)
        return;
    vis[r][c]=1;
    cntcells(r,c-1);
    cntcells(r-1,c);
    cntcells(r,c+1);
    cntcells(r+1,c);
    cntcells(r-1,c+1);
    cntcells(r+1,c+1);
    cntcells(r-1,c-1);
    cntcells(r+1,c-1);
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
   int k=1;
   while(cin>>t){
        //int arr[t][t];
        for(int i=0;i<t;i++){
            for(int j=0;j<t;j++){
                cin>>arr[i][j];
            }
        }
        for(int i=0;i<t;i++){
            for(int j=0;j<t;j++){
                if(vis[i][j]!=1 && arr[i][j]=='1')
                  cntcells(i,j),cnt++;
            }
        }
       // cout<<cnt<<endl;
      cout<<"Image number "<<k<<" contains "<<cnt<<" war eagles."<<endl;
      cnt=0,k++;
      memset(vis,0,sizeof(vis));
    }
    return 0;
}
