#include <algorithm>
#include <ctime>
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int ex1(int a, int b, int c) {
  // max method finds the highest value of the given inputs
  // min method finds the lowest value of the given inputs
  return std::max({a, b, c}) + std::min({a, b, c});
}
int ex2() {
  int counter = 0;
  for (int i = 0; i < 20; ++i) {
    // Random number between 0 - 1000000
    int num = rand() % 1000000 + 1;
    // string stream to convert int to string
    stringstream ss;
    ss << num;
    string str = ss.str();
    for (int j = 0; j < str.length(); ++j) {
      if (str[j] == '7')
        // if 7 is in the number we increment the counter by +1
        counter++;
    }
  }
  return counter;
}

int ex3(string str) {
  int counter = 1;
  // Starting counter at 1 because theres always one word
  for (int i = 0; i < sizeof(str); ++i) {
    if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
      // Checks if there are spaces new lines or tab
      // Increments by 1
      counter++;
  }
  return counter;
}

bool ex4(int x) {
  //initializing variables for calcualtions
  int div, sum = 0;
  //running a for loop for 1 less number of times than the value of x
  for (int i = 1; i < x; i++) {
    //setting div equal to the remainder of x/i, i is incremeanted each time
    div = x % i;
    if (div == 0)
      //if the remainder is 0, sum gets added the value of i
      sum = sum + i;
  }
  //if the value of sum is equal to x, return true, else return false.
  if (sum == x)
    return true;
  else
    return false;
}

auto ex5(int radius) {

  // Calculation to find circumference and area
  float circumference = (2 * 3.14 * radius);
  float area = (3.14 * (radius * radius));

  cout << "The circumference is " << circumference << endl;
  cout << "The area is " << area << endl;
}

void ex6(int A, int B) {
  // initializing the variables that will be needed for the calcualtions
  int counter = 0, tempA, tempB;

  // running a for loop to run 20 times (so roll 20 dice)
  for (int i = 0; i < 20; i++) {
    // randomizing a number from to the number of sides on the dice
    tempA = rand() % A;
    // adding the value to the counter
    counter = counter + tempA;
    tempB = rand() % B;
    counter = counter + tempB;
    // outputting the values for dice A and B for the roll
    cout << "dice A: " << tempA << " dice B: " << tempB << endl;
  }
  cout << "total: " << counter;
}


int main() {
  srand(static_cast<unsigned>(time(NULL)));

  // Returning Values From Functions

  // 1
  /*
  int a, b, c;
  cin >> a >> b >> c;
  cout << ex1(a, b, c);
  */
  // 2
  // cout << ex2();
  // 3
  /*
  string str;
  cin >> str;
  cout << ex3(str);
  */
  // 4
  /*
  int x;
  cin >> x;
  cout << ex4(x);
  */
  // 5
  /*
  int radius;
  cin >> radius;
  ex5(radius);
  */
  // 6
  /*
  int diceA, diceB;
  cin >> diceA;
  diceB = diceA;
  //calling the functionand passing diceA and diceB as parameters
  rolls(diceA, diceB);
*/

}
