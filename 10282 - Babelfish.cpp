#include <bits/stdc++.h>

using namespace std;
int main()
{
	map<string, string> mp;
    string s;
    while (getline(cin, s), s != "")
    {
        stringstream ss(s);
        string a, b;
        ss >> b >> a;
        mp[a] = b;
    }
    //cin.ignore();
    while (getline(cin, s))
    {
        if (mp.find(s) == mp.end())
            cout << "eh" << endl;
        else
            cout << mp[s] << endl;
    }
	return 0;
}
