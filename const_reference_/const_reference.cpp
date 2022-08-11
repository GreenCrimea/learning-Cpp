#include <iostream>

int main(){

    int data {50};
    const int& ref_data {data};

    std::cout << "data ; " << data << std::endl;
    std::cout << "ref_data ; " << ref_data << std::endl;

    //cannot change data for const reference
    //ref_data = 55;

    //const pointer simulating reference behaviour
    const int* p_data {&data};

    std::cout << "data ; " << data << std::endl;
    std::cout << "p_data ; " << *p_data << std::endl;

    //cannot change pointer reference
    //*p_data = 55;

    return 0;
}
