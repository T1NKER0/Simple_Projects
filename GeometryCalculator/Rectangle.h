class Rectangle
{
public: 
Rectangle();
void setRectangleWidthAndLength(double w, double l);
double getRectanglePerimeter();
double getRectangleArea();

private:
double width, length;
};

Rectangle :: Rectangle()
{
  width = length = 0;
}

void Rectangle :: setRectangleWidthAndLength(double w, double l)
{
  width = w;
  length = l;
}

double Rectangle :: getRectanglePerimeter()
{
  return 2 * width + 2 * length;
}

  double Rectangle :: getRectangleArea()
{
  return width * length;
}


