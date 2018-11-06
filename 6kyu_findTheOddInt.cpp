#include <iostream>
#include <vector>

//Given an array, find the int that appears an odd number of times.
//
//There will always be only one integer that appears an odd number of times.

int findOdd(const std::vector<int>& numbers){
    for(int i = 0; i < numbers.size();++i){
        int counter{0};
        for(int j = 0; j < numbers.size(); ++j){
            if(numbers[i] == numbers[j]){
                ++counter;
            }
        }
        if(counter%2!=0)
            return numbers[i];

    }
    return -1;
}
int main() {
    using numbers = std::vector<int>;
    std::cout<<"Int that appears an odd number of times is: "<<findOdd(numbers{20,1,-1,2,-2,3,3,5,5,1,2,4,20,4,-1,-2,5})<<"\n";
    std::cout<<"Int that appears an odd number of times is: "<<findOdd(numbers{1,1,2,-2,5,2,4,4,-1,-2,5})<<"\n";
    std::cout<<"Int that appears an odd number of times is: "<<findOdd(numbers{1,1,1,1,1,1,10,1,1,1,1})<<"\n";
}