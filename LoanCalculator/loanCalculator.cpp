//This program creates a structure for loan, initializes it from the keyboard, then displays the structure.

#include <iostream>
#include <cmath>
using namespace std;

struct Loan //Loan = Structure Tag
{
//These variables will be part of every loan structure created
//in this program.

int ID; //unique integer range: 1111-9999
double amount; //loan $ amount
double rate; //annual interest rate
int term; //length of loan in months
};

double payment (Loan loan); //prototype

int main() 
{
  Loan loan1;
  double monthlyPayment;

  //Initiliaze loan1 Loan Structure
  cout <<"Enter loan ID: ";
  cin >> loan1.ID;

  cout <<"Enter loan amount: $";
  cin >> loan1.amount;

  cout <<"Enter loan interest rate (annual): ";
  cin >> loan1.rate;

  cout <<"Enter loan term: ";
  cin >> loan1.term;

  monthlyPayment = payment(loan1);

  cout <<"The monthly payment for Loan #" <<loan1.ID <<" is: $"
    <<monthlyPayment <<endl;

  return 0;
}

double payment (Loan loan)
{
  loan.rate = loan.rate / 1200; //yearly %
  
  return loan.amount * loan.rate * (pow((loan.rate + 1), loan.term) / (pow((loan.rate + 1), loan.term) - 1));
  
}
