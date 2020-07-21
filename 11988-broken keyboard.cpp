#include <bits/stdc++.h>

using namespace std;
int main()
{
   string s;
  list<string>str;
  while (cin>>s) {
    string tmp="";
    int len = s.size();

    for (int i = len - 1; i >= 0; --i){
      if (s[i] == '[')
        for (int j = i + 1; s[j] != ']' && s[j] != '[' && j < len; ++j)
                     tmp+=s[j];
    }
    str.push_front(tmp);
    tmp="";
    for (int i = 0; s[i] != '[' && s[i] != ']' && i < len; ++i){
          tmp+=s[i];
    }
    str.push_back(tmp);
    tmp="";
    for (int i = 0; i < len; ++i){
      if (s[i] == ']')
        for (i = i + 1; s[i] != '[' && i < len; ++i)
          if (s[i] != ']')
                tmp+=s[i];
          }
    str.push_back(tmp);
    for(auto it:str)
        cout<<it;
    str.clear();
    cout<<endl;
  }

	return 0;
}
