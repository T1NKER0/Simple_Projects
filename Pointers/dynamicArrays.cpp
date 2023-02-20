// This program demonstrates the use of dynamic arrays
//Calculates average monthly sales

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float *monthSales = nullptr;	// a pointer used to point to an array
	                                // holding monthly sales 

	float total = 0;	// total of all sales
	float average;		// average of monthly sales
	int numOfSales;		// number of sales to be processed 
	int count;			// loop counter
  float sales;     //monthly sales
  
	cout << fixed << showpoint << setprecision(2);

	cout << "How many monthly sales will be processed? ";
	cin >> numOfSales;

	// Fill in the code to allocate memory for the array pointed to by monthSales.
     monthSales = new float[numOfSales];

	if ( monthSales = nullptr)
	{
		cout << "Error allocating memory!\n";
		return 1;
	}

	cout << "Enter the sales below\n";

	for (count = 0; count < numOfSales; count++)
	{
		cout << "Sales for Month number "
		     // Fill in code to show the number of the month
         << count + 1
         <<": $";
    
		// Fill in code to bring sales into an element of the array
       cin >> sales;
       monthSales[count] = sales;
    
		total = total + monthSales[count];
	}
  
	average =  total / numOfSales;

	cout << "\nAverage Monthly sale is $" <<fixed <<setprecision(2)<< average << endl;

	// Fill in the code to deallocate memory assigned to the array
     delete [] monthSales;
	return 0;
}
