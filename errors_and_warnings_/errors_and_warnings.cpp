#include <iostream>

int main(){
    //compile time error - missing semicolon
    std::cout << "hello world" <<std::endl

   //runtime error - divide by 0
    int value = 7/0;
    std::cout << "value" << value << std::endl;
    return 0;
}