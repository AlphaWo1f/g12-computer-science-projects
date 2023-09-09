#include <iostream>
#include <ctime>
using namespace std;

int main() {

double balance, balances, monthlyPayment, interestRate, monthlyRate, total = 0; 
int months, month;

  srand(static_cast<unsigned>(time(NULL)));

  cout <<  "Enter initial balance: ";
  cin >> balance;
  balances = balance;
  
  cout << "Enter monthly payment: ";
  cin >> monthlyPayment;
  
  interestRate = rand() % 20 + 10;
  
  monthlyRate = ((interestRate)/12)/100;

  cout << monthlyRate<<endl;
  
  months = balance / (monthlyPayment*(1+monthlyRate));
  months = months + 1;
  month = months;
  while (months != 0 ){
// Justin was here
    balance = balance - monthlyPayment;
    balance = balance + (balance*monthlyRate);
    cout <<"Month: " << months << " " << balance << endl;
   total = total + (balance*monthlyRate);
    months = months- 1;
  }

  cout << "total: " << total+balances << " paid over " << month;
}