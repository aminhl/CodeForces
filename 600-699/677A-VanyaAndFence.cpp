#include <iostream>
using namespace std;

int main() {
  int nbFriends,fienceH,friendsW,cpt=0;
  cin >> nbFriends >> fienceH;
    for (int i = 0; i <nbFriends ; ++i) {
        cin >> friendsW;
        if(friendsW>fienceH)
            cpt++;
        cpt++;
    }
    cout <<cpt <<endl;
}