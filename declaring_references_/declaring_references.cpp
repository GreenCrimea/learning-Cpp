#include <iostream>

int main(){

    int data {33};
    double double_data {55};

    //references
    int& ref_int_data {data};
    double& ref_double_data {double_data};

    //print
    std::cout << "data " << data << std::endl;
    std::cout << "double_data " << double_data << std::endl;
    std::cout << "reference data " << ref_int_data << std::endl;
    std::cout << "reference double data " << ref_double_data << std::endl;

    data = 100;
    double_data = 200;

    std::cout << "data " << data << std::endl;
    std::cout << "double_data " << double_data << std::endl;
    std::cout << "reference data " << ref_int_data << std::endl;
    std::cout << "reference double data " << ref_double_data << std::endl;

    ref_int_data = 500;
    ref_double_data = 1000;

    std::cout << "data " << data << std::endl;
    std::cout << "double_data " << double_data << std::endl;
    std::cout << "reference data " << ref_int_data << std::endl;
    std::cout << "reference double data " << ref_double_data << std::endl;


    return 0;
}
