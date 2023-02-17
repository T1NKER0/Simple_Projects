//This program creates a structure for loan, initializes it from the keyboard, then displays the structure.

#include <iostream>
#include <cmath>
#include <iomanip>
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

//prototypes
void displayLoanInfo(Loan loan);
double payment (Loan loan); 

int main() 
{
  Loan loan;
  double monthlyPayment;

  //Initiliaze loan1 Loan Structure
  cout <<"Enter loan ID: ";
  cin >> loan.ID;

  cout <<"Enter loan amount: $";
  cin >> loan.amount;

  cout <<"Enter loan interest rate (annual): ";
  cin >> loan.rate;

  cout <<"Enter loan term: ";
  cin >> loan.term;

  monthlyPayment = payment(loan);

  displayLoanInfo(loan); //review data input

  cout <<"\nThe monthly payment for Loan #"  <<fixed <<setprecision(2) <<loan.ID <<" is: $"
    <<monthlyPayment <<endl;

  return 0;
}

double payment (Loan loan)
{
  loan.rate = loan.rate / 1200; //yearly %
  
  return loan.amount * loan.rate * (pow((loan.rate + 1), loan.term) / (pow((loan.rate + 1), loan.term) - 1));
  
}

void displayLoanInfo(Loan loan)
{
  cout <<"\n Loan ID: #" <<loan.ID; 
  cout <<"\n Loan Amount: $" <<loan.amount;
  cout <<"\n Loan Rate: " <<loan.rate <<"%";
  cout <<"\n Loan Term: " <<loan.term <<" months" <<endl;
}
