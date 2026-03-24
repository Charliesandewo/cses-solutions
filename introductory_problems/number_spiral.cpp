#include <iostream>
#include <vector>
#include <cmath>

long long find_number_spiral(long long x, long long y);
// first input = number of test
// second input which number in the number spiral
int main(){
  int number_of_tests;
  std::cin>>number_of_tests;
  std::vector<long long> values(number_of_tests);

  for(int i=0; i<number_of_tests;i++){
    std::vector<long long> index(2);
    for(int j=0;j<2;j++){
      std::cin>>index[j];
    }
    values[i] = find_number_spiral(index[0],index[1]);
  }

  for(long long x: values) std::cout<<"\n"<<x;

  return 0;
}

long long find_number_spiral(long long x,long long y){
  long long max_value = fmax(x,y);
  long long min_value = fmin(x,y);
  long long min_index = min_value - 1;
  long long decrement = 0;

  long long reference = max_value * max_value;

  bool is_max_even = max_value % 2 == 0;
  if ( x >= y){
    if(is_max_even){
      decrement = min_index;
    }
    else{
      decrement = (max_value-1) * 2 - min_index;
    }
  }
  else{
     if(is_max_even){
      decrement = (max_value-1) * 2 - min_index;
    }
    else{
      decrement = min_index;
    }
  }

  return reference - decrement;
}