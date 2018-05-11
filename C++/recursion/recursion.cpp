/* Recursion Algorithms Testing */
// @author: Pedro Navarrete

#include <iostream>
#include <stdlib.h>

using namespace std;

/// Algorithms ///

/* Arithmetic Summation Series*/
long ArithSeries(long X){
  if (X <= 1) {
    return X;
  } else {
    return X + ArithSeries(X-1);
  }
}


/* Summation Series between two numbers */
float ArithSumSeries(float X, float Y){

}


/* Largest Comon Factor - with Euclid's Method */
int LGF(int P, int Q){

}


/* Reverse String */
void ReverseString(char S[], int index){

}

/// Algorithm Drivers ///

void testArithSeries(){

}

void testArithSumSeries(){

}

void testLGF(){

}

void testReverseString(){

}

/* Menu */
void showMenu(){
  cout << "Test Recursion Algorithms" << endl
   << "To test SumSeries type 1" << endl
   << "To test SumXY type 2" << endl
   << "To test Euclid LGM type 3" << endl
   << "To test Reverse String type 4" << endl
   << "Type '-1' to exit" << endl;
}

int main(){
  int n = 0;
  showMenu()l
  while(n != -1){
    cin >> n;
    switch (n) {
      case 1:
        testArithSeries();
        break;
      case 2:
        testArithSumSeries();
        break;
      case 3:
        testLGF();
        break;
      case 4:
        testReverseString();
        break;
      default:
    }
  }


}
