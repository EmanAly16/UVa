#include<iostream>
#include<bits/stdc++.h>
using namespace  std;

int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
   int n;
   vector<int>prim;
   while(cin>>n &&n){
        int num=n;
        if(n<0)
        {
            n*=-1;
            prim.push_back(-1);
        }

        while(!(n%2)){
            prim.push_back(2);
            n/=2;
        }
        for(int i=3;i<=sqrt(n)&& i!=1;i+=2)
        {
            while(n%i==0)
            {
                prim.push_back(i);
                n/=i;
            }
        }
        if(n!=1)
            prim.push_back(n);

        cout<<num<<" = ";
        for(int i=0;i<prim.size()-1;i++){
            cout<<prim[i]<<" x ";
        }
        cout<<prim[prim.size()-1]<<endl;
        prim.clear();

   }
    return 0;
}
