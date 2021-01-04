#include<iostream>
#include<bits/stdc++.h>
using namespace  std;
bool cmp(pair<int, int>& a,
         pair<int, int>& b)
{
    return a.second < b.second;
}
vector<int>hi;

void sort(map<int, int>& M)
{

    vector<pair<int, int> > A;

    for (auto& it : M) {
        A.push_back(it);
    }

    sort(A.begin(), A.end(), cmp);

    int z=1,res;
    for (auto& it : A) {
        if(z==1)res=it.second,z=0;
        if(it.second==res)
           hi.push_back(it.first+1);
    }
 //   cout<<endl;
}
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n,m;
    cin>>n;
    while(n--){
        cin>>m;
        string s,t;
        vector<int>v;
        map<int,int>mp;
        cin.ignore();
        for(int i=0;i<m;i++){
            getline(cin,s);
             stringstream X(s);

            while (getline(X, t, ' ')) {
               // v.push_back(stoi(t));
               mp[i]++;
            }
         /*  for(int j=0;j<v.size()-1;j++){
               mp[v[j]]++;
           }*/

        }
        sort(mp);
        sort(hi.begin(),hi.end());
        for(int i=0;i<hi.size()-1;i++){
            cout<<hi[i]<<' ';
        }
        cout<<hi[hi.size()-1]<<endl;
        hi.clear();
    }
    return 0;
}

