#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool isPalindrome(string s)
{
    string r_s=s;
    reverse(r_s.begin(), r_s.end());
    return s == r_s;
}

bool ismirrored(string s)
{
    char a[] = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";
    char b[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
    string r_s=s;
    reverse(r_s.begin(), r_s.end());
    for(int i=0;i<r_s.size();i++)
      for(int j=0;j<35;j++)
    {
           if(r_s[i]==b[j])
           {
               r_s[i]=a[j];
               break;
           }

    }
    return s == r_s;
}
int main(){
    string r;
    while(cin>>r){
    if(isPalindrome(r)&& ismirrored(r))
        cout<<r<<" -- is a mirrored palindrome."<<endl;
    else if(isPalindrome(r)&& !ismirrored(r))
        cout<<r<<" -- is a regular palindrome."<<endl;
     else if(!isPalindrome(r)&& ismirrored(r))
        cout<<r<<" -- is a mirrored string."<<endl;
    else
        cout<<r<<" -- is not a palindrome."<<endl;

    cout<<endl;
    }


    return 0;
}
