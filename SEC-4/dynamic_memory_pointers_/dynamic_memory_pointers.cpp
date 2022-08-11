#include <iostream>

int main(){

    int* p_1{};
    p_1 = new int;

    *p_1 = 50;

    std::cout << "dynamically allocated memory ; " << *p_1 << std::endl;

    delete p_1;
    p_1 = nullptr;

    return 0;
}
