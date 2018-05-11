/* Recursion Algorithms Testing */
// @author: Pedro Navarrete

#include <iostream>
#include <stdlib.h>

using namespace std;

// Arithmetic Series Algorithm
long ArithSeries(long X){
  if (X <= 1) {
    return X;
  } else {
    return X + ArithSeries(X - 1);
  }
}
// Arithmetic Series Driver
void testArithSeries(){
  long n;
  cout << "Testing Summation Series" << endl;
  cout << "Enter a number: ";
  cin >> n;

  cout << "The Summation is: " << ArithSeries(n) << endl;
}


// Summation Series between two numbers Algorithm
float ArithSumSeries(float X, float Y){
  if (X > Y) {
    int hold = X;
    X = Y;
    Y = hold;
  }
  return (X == Y) ? Y : X + ArithSumSeries(X + 1, Y);
}
// Summation between two numbers Driver
void testArithSumSeries(){
  float a, b;
  cout << "Testing Summation from A to B" << endl;
  cout << "Enter number A: ";
  cin >> a;
  cout << "Enter number B: ";
  cin >> b;

  cout << "The Summation is: " << ArithSumSeries(a, b) << endl;
}

// Largest Comon Factor - with Euclid's Method
int LCF(int P, int Q){
  if (P % Q == 0) {
    return Q;
  } else {
    return LCF(Q, P % Q);
  }
}
// Largest Common Factor Driver
void testLCF(){
  int a, b;
  cout << "Testing Largest Common Factor of A & B" << endl;
  cout << "Enter two numbers: ";
  cin >> a >> b;

  cout << "The Largest Common Factor is: " << LCF(a, b) << endl;

}

/* Reverse String */
void ReverseString(char S[], int index){

}



void testReverseString(){

}

/* Menu */
void showMenu(){
  cout << "Test Recursion Algorithms" << endl
   << " To test Summation Series Enter '1'" << endl
   << " To test Summation Between Two Numbers Enter '2'" << endl
   << " To test Largest Common Factor Enter '3'" << endl
   << " To test Reverse String Enter '4'" << endl
   << " Enter '-1' to exit" << endl << endl
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
