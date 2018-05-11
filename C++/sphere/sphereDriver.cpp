/* sphere class driver program */
#include <iostream>
#include "sphere.h"

using namespace std;

int main(){
  // Calling the Parametized Constructor
  sphere sphereA(5.1);
  // Calling the Default Constructor
  sphere sphereB;

  // Testing the spheres
  sphereA.DisplayInfo();
  sphereB.DisplayInfo();

  sphereB.set_radius(2.5);
  sphereB.DisplayInfo();
}
