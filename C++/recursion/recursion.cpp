/* Recursion Algorithms Testing */
// @author: Pedro Navarrete

#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <iomanip>

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

// Largest Comon Factor - with Euclid's Method Algorithm
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


// Reverse String Algorithm
void ReverseString(char S[], int i){
  if (i >= 0){
    cout << S[i];
    ReverseString(S, --i);
  }
}
// Reverse String Driver
void testReverseString(){
  int MAX = 99;
  char line[MAX+1];
  cout << "Testing Reverse String" << endl;
  cout << "Enter string..." << endl;
  cin.ignore();
  cin.get(line, MAX);

  cout << "The reversed string is: " << endl;
  ReverseString(line, strlen(line) -1);
}

// Factorial Algorithm
float Factorial(float n){
  if ( n <= 1) {
    return 1;
  } else {
    return n * Factorial(n - 1);
  }
}
// Factorial Driver
void testFactorial(){
  float num;
  cout << "Testing Factorial" << endl;
  cout << "Enter an integer: ";
  cin >> num;
  cout << "The Factorial is: " << Factorial(num) << endl;
}

// Fibonacci Recursive Algorithms !Inneficient
long Fib(long n){
  if (n <= 1) {
    return n;
  } else {
    return Fib(n-1) + Fib(n-2);
  }
}
// Fibonacci Recursive Driver !!!Inneficient
void testFib(){

  int num;
  cout << "Testing Fibonacci" << endl;
  cout << "Enter an integer: ";
  cin >> num;
  cout << "The Fibonacci "<< num <<"th is: " << Fib(num) << endl;
}


/* Menu */
void showMenu(){
  cout << "Recursion Algorithms Driver, enter..." << endl
   << "  '1' for Summation Series"<< endl
   << "  '2' for Summation Between Two Numbers"<< endl
   << "  '3' for Largest Common Factor"<< endl
   << "  '4' for Reverse String"<< endl
   << "  '5' for Factorial"<< endl
   << "  '6' for Fibonacci" << endl
   << "Enter '-1' to exit";
}

/* Main Program */
int main(){
  cout << fixed << setprecision(0);
  int n = 0;
  showMenu();
  while(n != -1){
    cout << "\n\nTest Option? ";
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
      case 5:
        testFactorial();
        break;
      case 6:
        testFib();
        break;
    }
  }


}
