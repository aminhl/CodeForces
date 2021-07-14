#include <iostream>
#include <algorithm>
#include <string>
#include "string.h"
using namespace std;

int main() {
    string name;
    cin >> name;

    sort(name.begin(),name.end());
    int cmpt=0;
    for (int i = 0; i <name.length() ; ++i) {
        if (name[i]==name[i+1]){
            cmpt++;
        }
    }
    if ((name.length()-cmpt)%2)
        cout << "IGNORE HIM!" << endl;
    else
        cout << "CHAT WITH HER!" <<endl;
}