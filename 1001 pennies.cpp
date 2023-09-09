#include <iostream>
using namespace std;

int main() {
  char arr[1001];

  int p = 0, n = 0, d = 0, q = 0;

  for (int i = 0; i < sizeof(arr); i++) {
    arr[i] = 'P';
  }

  for (int i = 1; i < sizeof(arr); i = i + 2) {
    arr[i] = 'N';
  }

  for (int i = 2; i < sizeof(arr); i = i + 3) {
    arr[i] = 'D';
  }

  for (int i = 3; i < sizeof(arr); i = i + 4) {
    arr[i] = 'Q';
  }

  for (int i = 0; i < sizeof(arr); i++) {
    if (arr[i] == 'P')
      p++;
    else if (arr[i] == 'N')
      n++;
    else if (arr[i] == 'D')
      d++;
    else if (arr[i] == 'Q')
      q++;
  }

  cout << p << " " << n << " " << d << " " << q << endl;
  double money = (p * 0.01) + (n * 0.05) + (d * 0.10) + (q * .25);
  cout << money;
}