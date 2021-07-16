#include <bits/stdc++.h>
using namespace std;
 
int main() {
   string exhibit;
   cin >> exhibit;
   int start=0,moves=0;
    for (int i = 0; i <exhibit.size() ; ++i) {
        int index = exhibit[i] - 97;
        int walk = abs(start - index);
        if (walk<13)
            moves += walk;
        else
            moves += 26 - walk;
        start = index;
    }
    cout << moves;
}