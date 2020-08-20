#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    bool flag;
    while(cin>>n &&n){
      flag=false;
      for(int i=1;i<60;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(pow(i,3)-pow(j,3)==n){
                     cout<<i<<" "<<j<<endl;
                     flag=true;
                     break;
                }
            }
            if(flag)break;
        }
     if(!flag)
        cout<<"No solution"<<endl;
    }
    return 0;
}
