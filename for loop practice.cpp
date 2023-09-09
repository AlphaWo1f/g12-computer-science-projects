#include <iostream>
using namespace std;

int main() {

  //exercise 20 2-20 by 2s
  for (int a = 2; a <= 20; a += 2){
    cout << a <<'\n';
  }

  cout << '\n';
  
  //exercise 21
  for (int a = 20; a >= 0; a = a-1){
    cout << a << '\n';
  }

  cout << '\n';

  int max, total = 0;
  cout << "What is the max number? ";
  cin >> max;

  
  //exercise 22
  for (int a = 1; a <= max; a = a + 2){
    total = total + a;
    }
  cout << "The sum of all the odd numbers is: " << total;
}