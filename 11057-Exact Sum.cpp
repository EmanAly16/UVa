#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        int m;
        cin>>m;
        sort(ar,ar+n);
        int st=ar[0];
        int ed=ar[n-1];
        for(int i=0;i<n;i++)
        {
            int x=ar[i];
            int y=m-x;
            if(x>y)
                break;
            if(binary_search(ar+ i + 1, ar+n, y))
            {
                if (y - x < ed - st)
                {
                    st = x;
                    ed = y;
                }
            }
        }
        cout<<"Peter should buy books whose prices are "
             << st<< " and "<< ed<< "." << endl;
        cout<< endl;
    }
    return 0;
}
