#include <iostream>
#include <bits/stdc++.h>
using namespace std ;

int main() {

  int n;
  cin>>n;
  int a[3];
     for(int i=0;i<n;i++)
     {
         cin>>a[0]>>a[1]>>a[2];
         sort(a,a+3);
         cout<<"Case "<<i+1<<": "<<a[1]<<endl;
     }
}
