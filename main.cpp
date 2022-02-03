#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <stdexcept>

std::string inputString();
std::string longest(const std::string& s1, const std::string& s2);

int main()
{
    std::string input_string1 = inputString();
    std::string input_string2 = inputString();
    std::string a = longest(input_string1, input_string2);
    std::cout << a << std::endl;
    return 0;
}

std::string inputString() {
    std::string n;
    std::cout << "Input string: " << std::endl; std::cin >> n;
    return n;
};

std::string longest(const std::string& s1, const std::string& s2){
    std::string result; 
    result = s1 + s2;
    std::sort(result.begin(), result.end());
    auto res = std::unique(result.begin(), result.end());
    result = std::string(result.begin(), res);
    return result;
}