#include <iostream>
using namespace std;

int main() {
    int nbFriends, fenceHeight, cmpt = 0;
    cin >> nbFriends >> fenceHeight;
    int heightFriends[nbFriends];
    for (int i = 0; i < nbFriends; i++) {
        cin >> heightFriends[i];
        if (heightFriends[i] > fenceHeight)
            cmpt++;
        cmpt++;
    }
    cout << cmpt << endl;
}
