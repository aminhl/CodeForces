#include <iostream>
#include <string>
#include "string.h"
using namespace std;

int main() {
 string s1,s2;
 cin >> s1 >> s2;
    for (int i = 0; i <s2.size() ; ++i) {
        s2[i] = tolower(s2[i]);
        s1[i]= tolower(s1[i]);
    }
   cout << strcmp(s1.c_str(),s2.c_str()) <<endl;
}