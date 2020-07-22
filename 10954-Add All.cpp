#include <bits/stdc++.h>

using namespace std;
int main()
{
	int n,m,a,b;
	long long sum;
	while(cin>>n &&n)
    {
        sum=0;
        priority_queue<int>q;
        for(int i=0;i<n;i++)
        {
            cin>>m;
            q.push(-m);
        }
        while(!q.empty())
        {
            a=-q.top();
            q.pop();
            b=-q.top();
            q.pop();
            sum+=(a+b);
            if(!q.empty())q.push(-(a+b));
        }
        cout<<sum<<endl;
    }
	return 0;
}
