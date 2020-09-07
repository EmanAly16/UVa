#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool comp(char a, char b){
    if(tolower(a) == tolower(b))
      return a<b;
	return tolower(a) < tolower(b);
}

int main() {
	char word[1001];
	int n;
	cin >> n;
    cin.ignore();
	while(n--){
		cin >> word;

		sort(word,word+strlen(word),comp);
		cout << word << endl;
		while(next_permutation(word,word+strlen(word),comp))
			cout << word << endl;
	
	}
	return 0;
}
