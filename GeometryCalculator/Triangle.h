class Triangle
{
public:
Triangle();
void setTriangleSides(double s1, double s2, double s3);
void setTriangleBaseAndHeight(double b, double h);
double getTriangleArea();
double getTrianglePerimeter();

private:
double side1, side2, side3, base, height;
};

Triangle :: Triangle()
{
  side1 = side2 = side3 = 0;
}

void Triangle :: setTriangleSides(double s1, double s2, double s3) {
  side1 = s1;
  side2 = s2;
  side3 = s3;
}

void Triangle :: setTriangleBaseAndHeight(double b, double h)
{
  base = b;
  height = h;
}

double Triangle :: getTriangleArea()
{
  return 0.5 * base * height;
}

double Triangle :: getTrianglePerimeter()
{
  return side1 + side2 + side3;
}