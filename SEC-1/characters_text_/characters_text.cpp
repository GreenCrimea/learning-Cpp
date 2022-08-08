#include <iostream>

int main(){

    char character1 {'h'};
    char character2 {'e'};
    char character3 {'l'};
    char character4 {'l'};
    char character5 {'o'};

    std::cout << character1 << std::endl;
    std::cout << character2 << std::endl;
    std::cout << character3 << std::endl;
    std::cout << character4 << std::endl;
    std::cout << character5 << std::endl;

    char value = 65;  // ascii code for A

    std::cout << "value : " << value << std::endl;  // print as text by default
    std::cout << "value(int) : " << static_cast<int>(value) << std::endl;  //print as int with static_cast

    return 0;
}
