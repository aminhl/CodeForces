#include <iostream>
using namespace std;

int main() {
  int limakW,bobW,years=0; cin >> limakW >> bobW;
    do{
    limakW *=3;
    bobW *=2;
    years++;
    } while (limakW<=bobW);
    cout << years << endl;
    return 0;
}


