#include <iostream>

int main(){
    std::cout << "no1" << std::endl;
    
    int num {8};
    std::cout << (num += 5) << std::endl;  //prints 13 // increment 5

    num = 8;
    std::cout << (num -= 5) << std::endl;  //prints 3 // decrement 5

    num = 8;
    std::cout << (num *= 2) << std::endl; //prints 16 // times 2

    num = 8;
    std::cout << (num /= 2) << std::endl; //prints 4 // divide by 2

    num = 8;
    std::cout << (num %= 3) << std::endl; //prints 2 // mod 3

    return 0;
}
