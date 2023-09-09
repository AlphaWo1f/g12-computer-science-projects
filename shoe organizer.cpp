#include <iostream>
#include <vector>
#include <algorithm>
int main() {

  std::vector<int> style;
  std::vector<std::string> color;
  std::vector<int> size;
  char in;
  int s;
  std::string c;
  int b;

  std::cin >> in;

  if (int(in) == 65 || int(in) + 32 == 65 + 32) {
    std::cout << "\nEnter style: ";
    std::cin >> s;
    style.push_back(s);

    std::cout << "\nEnter color: ";
    std::cin >> c;
    color.push_back(c);

    std::cout << "\nEnter size: ";
    std::cin >> b;
    size.push_back(b);

    std::cout << "\nShoe added.";
    exit(0);
  } else if (in == 'f' || in == 'F') {

    std::cout << "\nEnter style: ";
    std::cin >> s;

    std::cout << "\nEnter color: ";
    std::cin >> c;

    std::cout << "\nEnter size: ";
    std::cin >> b;

    for (int i = 0; i < sizeof(style); i++) {
      if (style[i] == s && color[i] == c && size[i] == b) {
        std::cout << "Shoe Found";
        exit(0);
      }
      std::cout << "Shoe not found";
    }
  } else {
    std::cout << "\nEnter style: ";
    std::cin >> s;

    std::cout << "\nEnter color: ";
    std::cin >> c;

    std::cout << "\nEnter size: ";
    std::cin >> b;

    for (int i = 0; i < sizeof(style); i++) {
      if (style[i] == s && color[i] == c && size[i] == b) {
        std::vector<int>::iterator i = std::find(style.begin(), style.end(), 2);
        style.erase(i);

        exit(0);
      }
      std::cout << "Shoe not found";
      exit(0);
    }
  }
}