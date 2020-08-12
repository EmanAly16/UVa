#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    long long r,rs,temp;
    for(int i=0;i<n;i++){
        int c=0;
        cin>>r;
        while(1){
           temp=r;
           rs=0;
            while(r!=0){
                rs=rs*10+r%10;
                r=r/10;
            }
            if(rs==temp){
                cout<< c<<" "<<rs<<endl;
                break;
            }
            else{
                r=temp+rs;
                c++;
            }
        }
    }


    return 0;
}
