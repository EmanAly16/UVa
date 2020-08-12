#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
  
   int n,m,num;
   int in=1;
   while(cin>>n>>m)
   {
       if(!n && !m)break;
       vector<int>v;
       for(int i=0;i<n;i++)
       {
           cin>>num;
           v.push_back(num);
       }
       sort(v.begin(),v.end());
       cout<<"CASE# "<<in<<":"<<endl;
       for(int i=0;i<m;i++){
        cin>>num;
        int ind=lower_bound(v.begin(),v.end(),num)-v.begin();
        if(v[ind]==num)
        cout<<num<<" found at "<<ind+1<<endl;
        else
        cout<<num<<" not found"<<endl;
       }
       in++;
       v.erase(v.begin(),v.end());
   }
    return 0;
}
