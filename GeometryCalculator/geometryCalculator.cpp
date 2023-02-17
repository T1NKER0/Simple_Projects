#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
using namespace std;

int main() 
{

  int input;
  double cRadius, rWidth, rLength, tBase, tHeight, tS1, tS2, tS3;
  
  cout << "Geometry Calculator!" <<endl;
  cout <<"\n1. Circle Area" <<endl;
  cout <<"2. Triangle Area" <<endl;
  cout <<"3. Rectangle Area" <<endl;
  cout <<"4. Circle Circumference" <<endl;
  cout <<"5. Triangle Perimeter" <<endl;
  cout <<"6. Rectangle Perimeter" <<endl;

  cout <<"\nSelect Desired Option Or Enter 0 To Exit..." <<endl;
  cin >> input;

Circle circle;
Rectangle rectangle;
Triangle triangle;
  
 switch (input)
  {

    case 1:
      {
       cout <<"Enter circle radius: ";
       cin >> cRadius;

       circle.setRadius(cRadius);

       cout <<"The area of the circle is: "
      <<circle.getCircleArea() <<endl;
       break;
      }

    case 2: 
      {
        cout <<"Enter triangle base: ";
        cin >> tBase;
        cout <<"Enter triangle height: ";
        cin>> tHeight;

        triangle.setTriangleBaseAndHeight(tBase, tHeight);
        
        cout <<"The area of the triangle is: " <<triangle.getTriangleArea() <<endl;
        break;
      }

    case 3:
    {
      cout <<"Enter rectangle width: ";
      cin >> rWidth;
      cout <<"Enter rectangle height: ";
      cin >> rLength;

      rectangle.setRectangleWidthAndLength(rWidth, rLength);

      cout <<"The area of the rectangle is: " <<rectangle.getRectangleArea() <<endl;
      break;
    }

    case 4:
      {
        cout <<"Enter circle radius: ";
       cin >> cRadius;

        circle.setRadius(cRadius);

        cout <<"The circumference is : " <<circle.getCircumference() <<endl;
        break;
      }

    case 5:
      {
        cout <<"Enter the length of each side of the triangle: " <<endl;
        cout <<"Side 1: ";
        cin >> tS1;
        cout <<"Side 2: ";
        cin >> tS2;
        cout <<"Side 3: ";
        cin >> tS3;
        
        triangle.setTriangleSides(tS1, tS2, tS3);

        cout <<"The perimeter of the triangle is: "  <<triangle.getTrianglePerimeter() <<endl;
      }

     case 6:
    {
      cout <<"Enter rectangle width: ";
      cin >> rWidth;
      cout <<"Enter rectangle height: ";
      cin >> rLength;

      rectangle.setRectangleWidthAndLength(rWidth, rLength);

      cout <<"The perimeter of the rectangle is: " <<rectangle.getRectanglePerimeter() <<endl;
      break;
      }

    default:
      {
        exit(0);
      }
  }
  return 0;
}