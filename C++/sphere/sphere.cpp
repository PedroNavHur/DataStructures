/* Sphere Class Implementation*/

#include "sphere.h"
#include <iostream>

using namespace std;

const double PI = 3.14;

// Constructors
Sphere::Sphere(double R) : TheRadius(R){}
Sphere::Sphere() : TheRadius(1.0){}

// Destructor
Sphere::~Sphere(){}

 // Mutator
 void Sphere::set_radius(double R){
   TheRadius = R;
 }

 // Accesors
 double Sphere::getRadius(){
   return TheRadius;
 }
 double Sphere::getDiameter(){
   return 2.0 * TheRadius;
 }
 double Sphere::getCircumference(){
   return PI * getDiameter();
 }
 double Sphere::getArea(){
   return 4.0 * PI * TheRadius * TheRadius;
 }
 double Sphere::getVolume(){
   return (getArea * TheRadius) / 3.0;
 }

 void Sphere::DisplayInfo(){
   cout << "The Radius = " << getRadius() << endl
        << "The Diameter = " << getDiameter() << endl
        << "The Circumference = " << getCircumference() << endl
        << "The Area = " << getArea() << endl
        << "The Volume = " << getVolume() << endl;
 }
