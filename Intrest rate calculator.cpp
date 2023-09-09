#include <iostream>
using namespace std;


int main() {
  //initialize all variables for intial investment, rates, and total
  double initial, Y1, Y2, Y3, Y4, Y5, total = 0;

  //getting value of initial investment from user
  cout << "Enter initial investment: ";
  cin >> initial;

  //getting the value of the year 1 rate
  cout << "Enter interest rate for year 1: ";
  cin >> Y1;
  //calculating the money earned from the rate
  total= (initial*Y1);
  //adding the money earned from the rate back into the initial investment
  initial += (initial*Y1);
  //outputting the money earned from rate
  cout << "You earned $" << (total) << " interest" << endl;

  //repeating same process from year 1, but to year 2
  cout << "Enter interest rate for year 2: ";
  cin >> Y2;
  total = (initial*Y2);
  initial += (initial*Y1);
  cout << "You earned $" << (total) << " interest" << endl;

    //repeating same process from year 1, but to year 3
  cout << "Enter interest rate for year 3: ";
  cin >> Y3;
  total = (initial*Y3);
  initial += (initial*Y1);
  cout << "You earned $" << (total) << " interest" << endl;

    //repeating same process from year 1, but to year 4
  cout << "Enter interest rate for year 4: ";
  cin >> Y4;
  total = (initial*Y4);
  initial += (initial*Y1);
  cout << "You earned $" << (total) << " interest" << endl;

    //repeating same process from year 1, but to year 5
  cout << "Enter interest rate for year 5: ";
  cin >> Y5;
  total = (initial*Y5);
  initial += (initial*Y1);
  cout << "You earned $" << (total) << " interest" << endl;

  //outputting the total balance after 5 years of rates
  cout << "Your CD is worth: $" << initial;
  
  }