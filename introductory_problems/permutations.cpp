#include <iostream>
#include <vector>
#include <cmath>

// input1 = number of permutation
// a permutation is said "beautiful" if there are no adjacent element which different is 1
int main(){
  int n;
  std::cin>>n;

  if(n==1){
    std::cout<<n;
    return 0;
  }
  std::vector<int> beautiful_permutation(n);

  int middle = ceil((float)n/2);
  for(int i=1;i<=middle;i++){
    beautiful_permutation[(n/2)+i-1]=2*i-1;
    if(2 * i <= n){
      beautiful_permutation[i-1]=2*i;
    }
  }

  if(n >= 2 and n <= 3){
    std::cout<<"NO SOLUTION";
  }
  else{
    for(int x: beautiful_permutation) std::cout<<x<<" ";
  }

  return 0;
}

