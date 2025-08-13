#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string input;
    std::getline(std::cin, input);  // example: "5 - 3"
    
    std::istringstream iss(input);
    int a, b;
    char op;

    iss >> a >> op >> b;  // extract first number, operator, second number

    if (op == '-') {  // check if operator is subtraction
        int result = a - b;
        std::cout << "Result: " << result << std::endl;
    } else {
        std::cout << "Error: Please use '-' for subtraction." << std::endl;
    }

