#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

   while(1)
    {
        int k;
        cin >> k;
        if(k==0) return 0;

        int  n,m;
        cin >> n >> m;

        for (int i = 0; i < k; i++) {
            int x,y;
            cin >> x >> y;
            if(x > n && y > m)
                cout << "NE" << endl;
            else if(x < n && y > m)
                cout << "NO" << endl;
            else if(x > n && y < m)
                cout << "SE" << endl;
            else if(x < n && y < m)
                cout << "SO" << endl;
            else
                cout << "divisa" << endl;
        }
    }
    return 0;
}
