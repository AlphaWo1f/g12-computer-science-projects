#include <ctime>
#include <iostream>

void game() {
  
  char YN;
  
  bool playAgain = true;
  
  
  while (playAgain == true){
      std::cout << "How many cards you want?: ";
  int in, pSum = 0, pNum, cSum = 0, cNum;
  std::cin >> in;

  std::cout << "You: ";
  for (int i = 0; i < in; i++) {
    pNum = rand() % 10 + 1;
    std::cout << pNum << " ";
    pSum += pNum;
  }

  std::cout << "\nComputer: ";
   for (int i = 0; i < 3; i++) {
    cNum = rand() % 10 + 1;
    std::cout << cNum << " ";
    cSum += cNum;
  }

  if ((pSum == cSum && pSum < 21 && cSum < 21) || (pSum > 21 && cSum > 21)) {
  std::cout << "I have " << cSum << " and you have " << pSum
            << " so we draw, would you like to play again? (Y/N) " << std::endl;
    Draws = Draws + 1;

    std::cin >> YN;

    if(YN != 'Y'){
      playAgain = false;
      std:: cout << "Computer wins = " << computerWins << std::endl;
    }
    
}
  

if (pNum <= 21 && cNum > 21) {
    std::cout << "I have " << cSum << " and you have " << pSum
            << " so you win, would you like to play again? (Y/N) " << std::endl;
  playerWins = playerWins + 1;

      std::cin >> YN;

    if(YN != 'Y'){
      playAgain = false;
      std:: cout << "Computer wins = " << computerWins << std::endl;
    }
  
} else {
    std::cout << "I have " << cSum << " and you have " << pSum
            << " so I win, would you like to play again? (Y/N) " << std::endl;
  computerWins = computerWins + 1;
}
}

int main() {

  int in2;
  game();
  std::cin >> in2;
  
 
  }
}

