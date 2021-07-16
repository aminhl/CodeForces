#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int a1,a2,a3,a4;
  cin >> a1 >> a2 >> a3 >> a4;
  string str;
  cin >> str;
  int sum=0;
    for (int i = 0; i <str.size() ; ++i) {
        if (str[i]=='1')
            sum+=a1;
        else if (str[i]=='2')
            sum+=a2;
        else if (str[i]=='3')
            sum+=a3;
        else
            sum+=a4;
    }
    cout << sum << endl;
}