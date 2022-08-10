#include <iostream>

int main(){
    
    int num1 {45};
    int num2 {60};
    int num3 {60};

    std::cout << std::boolalpha;

    std::cout << "num1 < num2 : " << (num1 < num2) << std::endl;  //return true if num1 less than num2
    std::cout << "num1 < num2 : " << (num1 > num2) << std::endl; //returns true if num1 greater than num2
  
    std::cout << "num1 < num2 : " << (num3 <= num2) << std::endl;  //return true if num3 less than/equal to num2
    std::cout << "num1 < num2 : " << (num1 >= num2) << std::endl; //returns true if num1 greater than/equal to num2
 
    std::cout << "num1 < num2 : " << (num3 == num2) << std::endl;  //return true if num1 is equal to num2
    std::cout << "num1 < num2 : " << (num3 != num2) << std::endl; //returns true if num1 is not equal to num2

    return 0;
}
