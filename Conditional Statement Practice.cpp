#include <iostream>

using namespace std;

int main() {

  //problem 1
  int height, width, length;

  cout << "enter height ";
  cin >> height;
  cout << "enter width ";
  cin >> width;
  cout << "enter length ";
  cin >> length;

  if (height > 10 || width > 10 || length > 10){
    cout << "Reject\n";
  }else{
    cout << "Accept \n";
  }


  //problem 2
  int num;
  cout << "enter number ";
  cin >> num;
  if (num < 25){
    cout << "less than 25\n";
  }


  //problem 3
  int loop = 1;
  while (loop != 13){
    cout << loop << "\n";
    loop ++;
  }
  
}