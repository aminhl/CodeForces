#include <bits/stdc++.h>
using namespace std;

int main() {
    int number;
    cin >> number;
    int cards[number];
    for (int i = 0; i <number ; ++i) {
        cin >> cards[i];
    }
    int serja=0,dima=0;
    int left=0,right=number-1;
    int turn=0,taken=number;

    while (taken!=0){
        if(turn%2==0){
            if (cards[left]>cards[right]){
                serja += cards[left];
                left++;
            }
            else{
                serja += cards[right];
                right--;
            }
        }
        else{
            if (cards[left]>cards[right]){
                dima += cards[left];
                left++;
            }
            else{
                dima += cards[right];
                right--;
            }
        }
    taken--;
        turn--;
    }

    cout << serja << " " << dima << endl;
}