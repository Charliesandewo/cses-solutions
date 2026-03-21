#include <iostream>
#include <vector>

// input1: n = length of array
// input2: value for each indexes of the array
int main(){
    int length = 0;
    std::cin>>length;

    long long movements = 0;
    std::vector<int> numbers(length);

    for(int i=0;i<length;i++){
        std::cin>>numbers[i];
    }

    for(int j=1;j< length;j++){
        if(numbers[j-1] > numbers[j]){
            movements += (numbers[j-1]-numbers[j]);
            numbers[j] = numbers[j-1];
        }
    }

    std::cout<<movements;
    return 0;
}