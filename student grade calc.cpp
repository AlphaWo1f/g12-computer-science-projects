#include <iostream>
using namespace std;

int main() {
  string student[3][7];

  for (int i = 0; i < sizeof(student) / sizeof(student[0]); i++) {
    double avg = 0;
    cout << "Please enter student #" << i + 1 << "'s name: ";
    cin >> student[i][0];
    for (int j = 0; j < 5; j++) {
      int num;
      cout << "\nEnter grade #" << j + 1 << ": ";
      cin >> num;
      avg += num;
      student[i][j + 1] = to_string(num);
    }
    avg /= 5.f;
    student[i][6] = avg;
  }

  cout << "TEST3: " << student[0][6] << endl;

  for (int i = 0; i < sizeof(student) / sizeof(student[0]); i++) {
    for (int j = 0; j < sizeof(student[0]) / sizeof(student[0][0]) + 1; j++) {
      cout << " " << student[i][j];
    }
    for (char c : student[0][6])
      cout << static_cast<double>(c) << ' ';

    cout << endl;
  }
}