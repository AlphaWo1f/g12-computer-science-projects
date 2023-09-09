#include <iostream>

void intro();

void daysToHours(unsigned int amt) {

  amt = amt * 24;
  std::cout << "That is " << amt << " hours.\n";
  intro();
}

void hoursToMin(unsigned int amt) {
  amt = amt * 60;
  std::cout << "That is " << amt << " minutes.\n";
  intro();
}

auto get_input(int type) {
  unsigned int amt;
  std::cin >> amt;
  if (type == 1) {
    daysToHours(amt);
  } else {
    hoursToMin(amt);
  }
}

void intro() {

  int in;

  std::cout << "1. Convert Days to hours\n2. Convert hours to minutes\n";
  std::cin >> in;

  if (in == 1) {
    std::cout << "Enter the amount of days: ";
    get_input(in);
  } else {
    std::cout << "Enter the amount of hours: ";
    get_input(in);
  }
}

int main() { intro(); }