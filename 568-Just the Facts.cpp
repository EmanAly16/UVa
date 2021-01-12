#include<iostream>
#include<bits/stdc++.h>
using namespace  std;
#define MOD 1000000007
#define SIZE 10000

void factorial(vector<long long >& fact)
{
    int i,ft=1;
    fact[0] = 1;
    for (i = 1; i <= SIZE; i++) {
        ft = (fact[i - 1]*i);
        while(ft%10 == 0)
            ft/=10;

        fact[i]=ft%100000;
    }
}
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    vector<long long>fact(SIZE+1, 0);

    factorial(fact);
    int n;
    while(cin>>n){
        string s=to_string(fact[n]),res;
        int i=s.size()-1;
        while(s[i]=='0'){
            i--;
        }
        res=s[i];
        cout<<setw(5)<<n<<" -> "<<res<<endl;
    }
    return 0;
}
