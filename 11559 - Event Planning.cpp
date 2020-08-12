#include <iostream>
#include <bits/stdc++.h>
using namespace std ;

int main() {

    long n,b,h,w,p;
    while(cin>>n>>b>>h>>w)
    {
        long  mn=999999999999;
        int a[w];
        for(int i=0;i<h;i++)
        {
            cin>>p;
            for(int j=0;j<w;j++)
            {
                cin>>a[j];
                if(a[j]>=n)
                    {
                        mn=min(mn,(n*p));
                    }
            }
        }
        if(mn<=b)
        cout<<mn<<endl;
        else
        cout<<"stay home"<<endl;

    }

}
