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
  double Radius();
  double Diameter();
  double Circumference();
  double Area();
  double Volume();
  void DisplayInfo();

private:
  //Member Variables
  double TheRadius;
};
