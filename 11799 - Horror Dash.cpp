#include <iostream>
#include <bits/stdc++.h>
using namespace std ;

int main() {

    int n,m;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        int a[m];
        for(int j=0;j<m;j++)
        {
            cin>>a[j];
        }
        cout<<"Case "<<i+1<<": "<<*max_element(a,a+m)<<endl;
    }

}
