#include <iostream>
#include <bits/stdc++.h>
using namespace std ;

bool isPalindrome(string s)
{
    string r_s=s;
    reverse(r_s.begin(), r_s.end());
   // cout<<r_s<<endl;
    return s == r_s;
}

int main()
{
    string s,ns;
    while (getline(cin,s)  && s!="DONE")
    {
         ns="";
        for (int i = 0; i < s.size(); ++i)
           {
               
               if(isalpha(s[i]))
                ns+=tolower(s[i]);
           }
           //cout<<ns<<endl;

           if(isPalindrome(ns))
            cout<<"You won't be eaten!"<<endl;
           else
            cout<<"Uh oh.."<<endl;
    }
    return 0;
}
