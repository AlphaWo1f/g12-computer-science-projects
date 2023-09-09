#include <iostream>
using namespace std;

string selectWord();


int main(){
  string word = selectWord(), answer, guess = "NULl";
  char letter;
  int tries = 0, temp, yes = 0;
  
  //count how many letters in word
  temp = word.length();

  //for loop and add "-" to the back of answer each time
  for (int i = 0; i < temp; i++){
    answer.append("-");
  }


  while(guess != word){
  
  cout << "Word is " << answer << endl;
    
    //get the guess    
    cout << "Your letter ($ to guess the word)?" << endl;
    cin >> letter;

   //if the guess is a $, let user guess the word
    if (letter == '$'){
      cout << "Your Guess? ";
      cin >> guess;
    }else{
       //if the guess is a letter, check if there is a match
      for (int i = 0; i < temp; i++){
        //if there is a match, change that letter in answer
        if (word[i] == letter){
          answer[i] = letter;
          yes++;
      }
    }  
      if (yes == 0){
        cout << "Sorry, there are no " << letter << "'S" << endl;
      }
    }

    tries++;
    yes = 0;
  }

  cout << "CORRECT! You took " << tries << " tries." << endl;

return 0;
}


string selectWord(){
  string in;
  cout << "Enter word to be guessed: " << endl;
  cin >> in;
  cout << "\u001b[2J";
  return in;
}
