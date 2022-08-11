#include <iostream>

int main(){

    //declare and initialise
    int* p_1 {};
    double* p_2 {};

    //assign pointer data
    int var {50};
    int* p_3{&var};

    std::cout << "var ; " << var << std::endl;
    std::cout << "var address ; " << p_3 << std::endl;

    //derefrencing a pointer
    int var2 {20};
    int* p_4 {&var2};

    std::cout << "var2 ; " << *p_4 << std::endl;
    


    return 0;
}
