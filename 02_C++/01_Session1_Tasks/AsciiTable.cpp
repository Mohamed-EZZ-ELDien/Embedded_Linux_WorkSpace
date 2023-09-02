#include <iostream>
int main() {
  char Symbol = 33;
  int counter = 33;
  std::cout << "+------+-----+" << std::endl;
  std::cout << "| Char |AscII|" << std::endl;
  std::cout << "+------+-----+" << std::endl;
  for (; counter < 127; counter++, Symbol++) {

    printf("|%4d  |%3c  |\n", counter, Symbol);    
  }
}