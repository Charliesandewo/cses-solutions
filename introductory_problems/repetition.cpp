#include <iostream>
#include <string>

int main(){
  std::string input;
  char current_letter;
  int longest_repetition=0;
  int current_repetition=0;

  std::cin>>input;

  for(char c: input){
    if(current_letter != c){
      current_letter = c;
      current_repetition = 1;
    }
    else{
      current_repetition++;
    }
    if(longest_repetition < current_repetition){
      longest_repetition = current_repetition;
    }
  }

  std::cout<<longest_repetition;
  return 0;
}