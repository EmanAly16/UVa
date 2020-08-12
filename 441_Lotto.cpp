#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int s[13];
    int k,ctr=0;
    while(cin >> k && k){
        if(ctr){ cout << endl;}
        ctr++;
 
        for(int i=0 ; i<k ; i++) 
           cin >> s[i];
 
        for(int i=0 ; i<k-5 ; i++){
            for(int j=i+1; j<k-4 ; j++){
                for(int x=j+1 ; x<k-3 ; x++){
                     for(int l=x+1 ; l<k-2 ; l++){
                        for(int m=l+1 ; m<k-1 ; m++){
                             for(int n=m+1 ; n<k ; n++){
                                cout << s[i] << " " << s[j] << " " << s[x] << " " << s[l] << " "<< s[m] << " " << s[n] << endl;
                             }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
