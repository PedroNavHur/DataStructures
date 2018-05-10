/* Spheere Class Definition*/
class Sphere {
public:
  //Constructors
  Sphere(double R);
  Sphere();
  //Destructor
  ~Sphere();

  //Mutator
  void set_radius(double R);

  //Accesors
  double getRadius();
  double getDiameter();
  double getCircumference();
  double getArea();
  double getVolume();
  void DisplayInfo();

private:
  //Member Variables
  double TheRadius;
};
