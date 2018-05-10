class Sphere {
public:
  Sphere(double R);
  Sphere();
  ~Sphere();

  void SetRadius(double R);
  double Radius();
  double Diameter();
  double Circumference();
  double Area();
  double Volume();

  void DisplayInfo();
private:
  double TheRadius;
};
