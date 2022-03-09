#include <iostream>

using namespace std;

void swapByValue(int x, int y)
{
          int t = x;
          x = y ;
          y = t;
          return;
}


void swapByRef(int *x, int *y)
{
          int t = *x;
          *x = *y ;
          *y = t;
          return;
}

int main(void) {

       int a =5 , b=7;
       int c =5 , d=7;
       swapByValue(a,b);
       swapByRef(&c,&d);
       cout << a << " " << b << endl ;
       cout << c << " " << d << endl ;
        
       return 0; ;


}