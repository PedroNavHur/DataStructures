/* Recursion Algorithms Testing */
// @author: Pedro Navarrete

#include <iostream>

using namespace std;

/// Algorithms ///

/* Arithmetic Summation Series*/
long ArithSeries(long X){

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

int main(){
  int n = 0;
  cout << "Test Recursion Algorithms" << endl
   << "To test SumSeries type 1" << endl
   << "To test SumXY type 2" << endl
   << "To test Euclid LGM type 3" << endl
   << "To test Reverse String type 4" << endl
   << "Type '-1' to exit" << endl;

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

    }
  }


}
