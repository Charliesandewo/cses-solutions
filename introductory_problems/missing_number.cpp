#include <iostream>
#include <vector>

// input 1: 2 <= length <= 2*1-0^5
// input 2: = unique series of number between 1 to length, except 1 number
int main(){
  int length;
  int sum=0;

  // input 1
  std::cin >> length;

  for(int x=1;x<=length;x++){
    sum+=x;
  }

  for(int i=0;i<length-1;i++){
    int input;
    // input 2
    std::cin >> input;
    sum-=input;
  }

  std::cout<<sum;
  return 0;
}