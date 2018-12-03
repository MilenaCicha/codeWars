#include <iostream>
#include <vector>
#include <algorithm>

long queueTime(std::vector<int>& customers, unsigned n){
    std::vector<int> tempVec (n);
    if(customers.empty())
        return 0;
    else if(customers.size() < n){
        return  *std::max_element(customers.begin(), customers.end());
    }
    else{
        for(auto& i : customers){
            *std::min_element(tempVec.begin(), tempVec.end())+=i;
        }
        return  *std::max_element(tempVec.begin(), tempVec.end());
    }

}




int main(){
//    There is a queue for the self-checkout tills at the supermarket.
//    Your task is write a function to calculate the total time required for all the customers to check out!
//
//    The function has two input variables:
//    customers: an array of positive integers representing the queue. Each integer represents a customer, and its value is the amount of time they require to check out.
//    n: a positive integer, the number of checkout tills.
//
//    The function should return an integer, the total time required.
//    Assume that the front person in the queue (i.e. the first element in the array/list) proceeds to a till as soon as it becomes free.

    std::vector<int> customers {1,2,3,4,5};
    std::cout<<queueTime(customers, 100)<<"\n";

    std::vector<int> customers1 {2,2,3,3,4,4};
    std::cout<<queueTime(customers1, 2)<<"\n";
    
    std::vector<int> customers2 {1,2,3,4};
    std::cout<<queueTime(customers2, 1)<<"\n";

}
