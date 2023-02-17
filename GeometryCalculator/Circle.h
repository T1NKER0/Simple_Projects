class Circle
{
public:
Circle();
void setRadius(double r);
double getCircleArea();
double getCircumference();

private:
double radius;
};

Circle :: Circle()
{
  radius = 0;
}

void Circle :: setRadius(double r)
{
  radius = r;
}

double Circle :: getCircleArea()
{
  return radius * radius * 3.14;
}

double Circle :: getCircumference()
{
  return 2 * 3.14 * radius;
}