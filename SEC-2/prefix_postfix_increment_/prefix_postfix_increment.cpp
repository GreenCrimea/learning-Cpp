#include <iostream>

int main(){
    std::cout << "no1" << std::endl;
    
    int num {8};
    std::cout << num++ << std::endl;  //prints 5 // increment after eval
    std::cout << num++ << std::endl;  //prints 6

    std::cout << num-- << std::endl;  //prints 6 // after eval
    std::cout << num-- << std::endl;  //prints 5

    std::cout << ++num << std::endl;  //prints 6 // increment befor eval
    std::cout << ++num << std::endl;  //prints 7

    std::cout << --num << std::endl;  //prints 6 // before eval
    std::cout << --num << std::endl;  //prints 5


    return 0;
}
