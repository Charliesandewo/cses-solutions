#include <iostream>
#include <string>

int main(){
  std::string dna_strain;
  std::cin>>dna_strain;

  int longest_repetition=1;
  int current_repetition=1;
  int length = dna_strain.size();

  for(int i=1;i<=length;i++){
    if(dna_strain[i-1] != dna_strain[i]){
      current_repetition = 0;
    }

    current_repetition++;
    longest_repetition = std::max(longest_repetition, current_repetition);
  }

  std::cout<<longest_repetition;
  return 0;
}