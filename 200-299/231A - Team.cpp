#include <iostream>
using namespace std;

int main() {
   int nbProblems,solved=0; cin >> nbProblems;
    while (--nbProblems>=0){
        int a,b,c;
        cin >> a >> b >> c;
        if(a + b +c > 1){
            solved++;
        }
    }
    cout << solved << endl;

}
