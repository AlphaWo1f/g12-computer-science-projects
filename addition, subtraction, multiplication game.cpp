#include <iostream>
using namespace std;
#include <ctime>

int main() {
  srand(time(NULL));
  int totalPoints, problem, op1, op2, ans;
  cout << "1. Addition \n2. Subtraction \n3. Multiplication\n";
  cin >> problem;
  for (int i = 0; i < 10; i++) {
    if (problem == 1) {
      op1 = rand() % 100 + 1, op2 = rand() % 100 + 1;
      cout << op1 << " + " << op2;
      cin >> ans;
      if (ans == (op1 + op2)) {
        cout << "CORRECT\n";
        totalPoints += 10;
      } else {
        cout << "INCORRECT\n";
        cout << op1 << " + " << op2;
        cin >> ans;
        if (ans == (op1 + op2)) {
          cout << "CORRECT\n";
          totalPoints += 5;
        } else {
          cout << "INCORRECT\n";
          cout << op1 << " + " << op2;
          cin >> ans;
          if (ans == (op1 + op2)) {
            cout << "CORRECT\n";
            totalPoints += 2;
          } else {
            cout << "You missed 3 times. The answer is " << (op1 + op2)
                 << ".\n";
          }
        }
      }
    } else if (problem == 2) {
      op1 = rand() % 100 + 1, op2 = rand() % 100 + 1;
      cout << op1 << " - " << op2;
      cin >> ans;
      if (ans == (op1 - op2)) {
        cout << "CORRECT\n";
        totalPoints += 10;
      } else {
        cout << "INCORRECT\n";
        cout << op1 << " - " << op2;
        cin >> ans;
        if (ans == (op1 - op2)) {
          cout << "CORRECT\n";
          totalPoints += 5;
        } else {
          cout << "INCORRECT\n";
          cout << op1 << " - " << op2;
          cin >> ans;

          if (ans == (op1 - op2)) {
            cout << "CORRECT\n";
            totalPoints += 2;
          } else {
            cout << "You missed 3 times. The answer is " << (op1 - op2)
                 << ".\n";
          }
        }
      }
    } else {
      op1 = rand() % 100 + 1, op2 = rand() % 100 + 1;
      cout << op1 << " * " << op2;
      cin >> ans;
      if (ans == (op1 * op2)) {
        cout << "CORRECT\n";
        totalPoints += 10;
      } else {
        cout << "INCORRECT\n";
        cout << op1 << " * " << op2;
        cin >> ans;
        if (ans == (op1 * op2)) {
          cout << "CORRECT\n";
          totalPoints += 5;
        } else {
          cout << "INCORRECT\n";
          cout << op1 << " * " << op2;
          cin >> ans;
          if (ans == (op1 * op2)) {
            cout << "CORRECT\n";
            totalPoints += 2;
          } else {
            cout << "You missed 3 times. The answer is " << (op1 * op2)
                 << ".\n";
          }
        }
      }
    }
  }
  cout << "Total Points: " << totalPoints;
}