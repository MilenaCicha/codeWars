#include<vector>
#include <iostream>

//You are provided with a list (or array) of integer arrays (or tuples).
//Each integer array has two items which represent number of people get into bus (The first item)
//and number of people get off the bus (The second item) in a bus stop.
//
//Your task is to return number of people who are still in the bus after the last bus station (after the last array).



unsigned int number(const std::vector<std::pair<int, int>>& busStops){

    unsigned gettingOn{0};
    unsigned gettingOff{0};
    for(auto v2 : busStops){
        gettingOn+= v2.first;
        gettingOff+= v2.second;
    }
    return gettingOn - gettingOff;

}





int main(){
    using V = std::pair<int, int>;
    using V2 = std::vector<V>;
    std::cout<<"Remaining passengers: "<<number(V2{V{10,0},V{3,5},V{5,8}})<<"\n";
    std::cout<<"Remaining passengers: "<<number(V2{V{3,0},V{9,1},V{4,10},V{12,2},V{6,1},V{7,10}})<<"\n";
    std::cout<<"Remaining passengers: "<<number(V2{V{10,0},V{13,0},V{17,40}})<<"\n";
}