#include <bits/stdc++.h>
using namespace std;
 
int main() {
 int price,deno;
 cin >> price >> deno;
 int i=1;
 bool stat= false;
    while (stat==false){
        if (price*i%10==0 || (price*i-deno)%10==0)
            stat= true;
        else
            i++;
    }
    cout << i;
}