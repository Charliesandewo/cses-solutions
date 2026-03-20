#include <iostream>
#include <vector>

int main(){
  long long input;
  int min = 0;
  int max = 1000000;

  std::vector<long long> result;

  int last_index = 0;

  std::cin >> input;

  result.push_back(input);

  while(result[last_index] != 1){
    if(result[last_index] % 2 == 0){
      result.push_back(result[last_index] / 2);
    }
    else{
      result.push_back(result[last_index] * 3 + 1);
    }
    ++last_index;
  }
  for(long long x : result) std::cout << x << " ";
}