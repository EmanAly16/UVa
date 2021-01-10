#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   // ios_base::sync_with_stdio(false);
    string a,b;
    while(cin>>a){
        cin>>b;
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        int arr[600]={0};

        for(int i=0;i<a.size();i++){
            for(int j=0;j<b.size();j++){
                arr[i+j]+=(a[i]-'0')*(b[j]-'0');
            }
        }
        for(int i=0;i<600-1;i++){
            arr[i+1]+=arr[i]/10;
            arr[i]%=10;
        }
        int i=599;
        while(i>0&& arr[i]==0)
            i--;

        for(;i>=0;i--)
            cout<<arr[i];
        cout<<endl;
    }
    return 0;
}
