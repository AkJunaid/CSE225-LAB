#include <iostream>
using namespace std;


int main() {

   bool isMale = false;
   bool isTall = false;

   if(isMale && isTall) {

    cout << "You are a tall Male" ;

    } else if(isMale && !isTall){

      cout << "Moros na ken!! " ;
    } else if( !isMale && isTall) {

     cout << "Heheh boi!!!" ;
    }    else{
        cout << "You are not a tall Male" ;
    }


   return 0;
}
