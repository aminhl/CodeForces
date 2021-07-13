#include <iostream>
using namespace std;

int main() {
   int nbGames,anton=0,danik=0; cin >> nbGames;
   string games; cin >> games;

   for(int i=0; i<nbGames; ++i){
       if( games[i]=='A'){
           anton++;
       }
       else
           danik++;
   }
    if(anton>danik){
        cout <<"Anton" <<endl;
 }
    else if(danik>anton){
        cout <<"Danik" <<endl;
    }
    else{
        cout <<"Friendship" <<endl;
    }
}


