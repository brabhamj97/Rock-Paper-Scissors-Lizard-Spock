#include <iostream>
#include <stdlib.h>

int main() {
  srand (time(NULL));
  // random number generator between 1, 2 or 3
  int computer = rand() % 3 + 1;

  int user = 0;

  // Starting game
std::cout << "====================\n";
std::cout << "rock.....paper.....scissors..... lizard...Spock\n";
std::cout << "====================\n";
 
std::cout << "1) ✊\n";
std::cout << "2) ✋\n";
std::cout << "3) ✌️\n";
std::cout << "4) 🦎\n";
std::cout << "5) 🖖\n";

// integer representing each choice
int rock = 1;
int paper = 2;
int scissors = 3;
int lizard = 4;
int spock = 5;
 
std::cout << "shoot! ";
std::cin >> user;

// Conditionals for logic
 /* 
  rock > scissors
  scissors > paper
  paper > rock
  lizard > spock
  spock > scissors
  scissors > lizard
  lizard > paper
  paper > spock
  spock > rock
  rock > lizard
  */
if (user == computer) {
  std::cout << user << " VS " << computer << " It's a tie";
}

if (user == rock && computer == scissors) {
  std::cout << user << " VS " << computer << " You win!";
}
else if (user == scissors && computer == paper) {
  std::cout << user << " VS " << computer << " You win!";
}
else if (user == paper && computer == rock){
  std::cout << user << " VS " << computer << " You win!";
}
else if (user == lizard && computer == spock){
  std::cout << user << " VS " << computer << " You win!";
}
else if (user == spock && computer == scissors){
  std::cout << user << " VS " << computer << " You win!";
}
else if (user == scissors && computer == lizard){
  std::cout << user << " VS " << computer << " You win!";
}
else if (user == lizard && computer == paper){
  std::cout << user << " VS " << computer << " You win!";
}
else if (user == paper && computer == spock){
  std::cout << user << " VS "<< computer << " You win!";
}
else if (user == spock && computer == rock){
  std::cout << user << " VS " << computer << " You win!";
}
else if (user == rock && computer == lizard){
  std::cout << user << " VS " << computer << " You win!";
}
else {
 std::cout << user << " VS " << computer << "You lose!!!";
}

}
