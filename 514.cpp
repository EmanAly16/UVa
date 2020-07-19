#include <bits/stdc++.h>

using namespace std;
int a[1005];
int main()
{
	int i, curr, n;
	while(cin>>n && n)
	{
		while(cin>>a[0] && a[0])
		{
            stack<int>p;
			for(int i=1; i<n;i++)
				cin>>a[i];

			curr = 0;

			for(int i=1;i<=n;i++)
			{
				p.push(i);

				while(p.size() > 0 && a[curr] == p.top())
				{
					curr++;
					p.pop();
				}
			}

			if(!p.size())  cout<<"Yes"<<endl;
			else   cout<<"No"<<endl;
		}

		cout<<("\n");
	}

	return 0;
}
