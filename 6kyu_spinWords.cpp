#include <string>
#include <iostream>
#include <algorithm>

std::string spinWords(const std::string &str)
{
    std::string reversedString = str;
    std::reverse(reversedString.begin(),reversedString.end());
    return reversedString;
}

int main(){
    std::cout<<spinWords("pizza");
}
