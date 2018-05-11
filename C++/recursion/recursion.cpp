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
int LCF(int P, int Q){

}

/* Reverse String */
void ReverseString(char S[], int index){

}

/// Algorithm Drivers ///

void testArithSeries(){
  long n;
  cout << "Testing Summation Series" << endl;
  cout << "Type a number: ";
  cin >> n;

  cout << "The Summation is: " << ArithSeries(n) << endl;
}

void testArithSumSeries(){

}

void testLCF(){

}

void testReverseString(){

}

/* Menu */
void showMenu(){
  cout << "Test Recursion Algorithms" << endl
   << " To test Summation Series type '1'" << endl
   << " To test Summation Between Two Numbers type '2'" << endl
   << " To test Largest Common Factor type '3'" << endl
   << " To test Reverse String type '4'" << endl
   << " Type '-1' to exit" << endl << endl
   << "Test Option? ";
}

int main(){
  int n = 0;
  showMenu();
  while(n != -1){
    cin >> n;
    cout << endl;
    switch (n) {
      case 1:
        testArithSeries();
        break;
      case 2:
        testArithSumSeries();
        break;
      case 3:
        testLCF();
        break;
      case 4:
        testReverseString();
        break;
    }
    cout << "\n\nTest Option? ";
  }


}
