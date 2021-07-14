#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string word;
    cin >> word;
    int up=0,low=0;
    for (int i = 0; i < word.length() ; ++i) {
        if (isupper(word[i]))
            up++;
        else
        low ++;
    }
    if (up>low){
        for (int i = 0; i <word.length() ; ++i) {
            word[i] = toupper(word[i]);
        }
    }
    else{
        for (int i = 0; i <word.length() ; ++i) {
            word[i] = tolower(word[i]);
        }
    }
    cout << word <<endl;
}
