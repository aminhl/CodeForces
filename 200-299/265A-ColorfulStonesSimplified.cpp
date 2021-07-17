#include <bits/stdc++.h>
using namespace std;
 
int main() {
 string s1,s2;
 cin >> s1 >> s2;
 int pos=0;
    for (int i = 0; i <s2.size(); ++i) {
        if (s1[pos]==s2[i])
        pos++;
    }
    cout << pos+1;
}