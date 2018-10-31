#include <vector>
#include <iostream>
//You are going to be given an array of integers.
// Your job is to take that array and find an index N where the sum of the integers to the left of N is equal to the sum of the integers to the right of N.
// If there is no index that would make this happen, return -1.
//
//For example:
//
//Let's say you are given the array {1,2,3,4,3,2,1}:
//Your function will return the index 3, because at the 3rd position of the array, the sum of left side of the index ({1,2,3})
// and the sum of the right side of the index ({3,2,1}) both equal 6.





int findEvenIndex(const std::vector<int>& numbers){

    int sum{0};
    int leftSide{0};
    int rightSide{0};
    for(int i = 0; i < numbers.size();++i){
        sum+=numbers[i];
    }
    rightSide=sum;
    for(int i = 0; i < numbers.size(); ++i){
        if(i>0){
        leftSide += numbers[i-1];}

        rightSide -= numbers[i];

        if(leftSide == rightSide)
            return i;
    }
    return -1;
}



int main(){

    std::vector<int> numbers {1,2,3,4,3,2,1};
    std::vector<int> numbers2 {1,100,50,-51,1,1};
    std::vector<int> numbers3 {10,-80,10,10,15,35,20};
    std::cout<<"Index at which left side and right side of vector numbers are equal in value: "<<findEvenIndex(numbers)<<std::endl;
    std::cout<<"Index at which left side and right side of vector numbers2 are equal in value: "<<findEvenIndex(numbers2)<<std::endl;
    std::cout<<"Index at which left side and right side of vector numbers3 equal in value: "<<findEvenIndex(numbers3);


}