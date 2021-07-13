#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int cubes; cin >> cubes;
  int box[cubes];
    for (int i = 0; i <cubes ; ++i) {
        cin >> box[i];
    }
   sort(box,box+cubes);
    for (int i = 0; i <cubes ; ++i) {
      cout << box[i] << " ";
    }
}