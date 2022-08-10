#include <iostream>

int main(){
    
    //addition
    int num1 {2};
    int num2 {7};

    int result = num1 + num2;
    std::cout << "result : " << result << std::endl;

    //subtraction
    result = num2 - num1;
    std::cout << "result : " << result << std::endl;

    //negative sunbtraction
    result = num1 - num2;
    std::cout << "result : " << result << std::endl;

    //multiplication
    result = num2 * num1;
    std::cout << "result : " << result << std::endl;

    //division
    result = num2 / num1;
    std::cout << "result : " << result << std::endl;

    //modulus
    result = num2 % num1;
    std::cout << "result : " << result << std::endl;

    return 0;
}
