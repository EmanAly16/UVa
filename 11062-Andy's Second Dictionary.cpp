#include <bits/stdc++.h>
using namespace std;

int main() {
    string line,s1="";
    set<string>st;
    while (getline(cin, line)) {
        stringstream input_stream(line);
        string sequence;
        while (input_stream >> sequence) {

          if (sequence[sequence.size() - 1] == '-') {
			for (int i = 0; i < sequence.size() - 1; i++) {
				if (isalpha(sequence[i]) || sequence[i] == '-')

					s1 += tolower(sequence[i]);
				else {
					if (s1!="") {
						st.insert(s1);
						s1 = "";
					}
				}

			}
		} else {
			for (int i = 0; i < sequence.size(); i++) {
				if (isalpha(sequence[i]) || sequence[i] == '-')

					s1 += tolower(sequence[i]);
				else {
					if (s1!="") {
						st.insert(s1);
						s1 = "";
					}
				}
			}
			if (s1!="")
				st.insert(s1);
			s1 = "";
        }
    }
    }

     for (set<string>::iterator it = st.begin(); it != st.end(); ++it) {
         cout<<*it<<endl;
     }

    return 0;
}
