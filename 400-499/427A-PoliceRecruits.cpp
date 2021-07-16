#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int number,event;
    cin >> number;
    int police=0;
    int issue=0;
    while (--number>=0){
        cin >> event;
        if (event==-1){
            if (police==0)
                issue++;
            else
                --police;
        }
        else{
            police += event;
        }
    }
    cout << issue << endl;
}