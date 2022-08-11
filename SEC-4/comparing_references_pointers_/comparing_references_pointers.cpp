#include <iostream>

int main(){

    double val {100};
    double& ref_val {val};
    double* p_val {&val};

    std::cout << "val ; " << val << std::endl;
    std::cout << "ref_val ; " << ref_val << std::endl;
    std::cout << "p_val ; " << p_val << std::endl;
    std::cout << "p_val dereferenced ; " << *p_val << std::endl;

    //writing through pointer
    *p_val = 200;

    std::cout << "val ; " << val << std::endl;
    std::cout << "ref_val ; " << ref_val << std::endl;
    std::cout << "p_val ; " << p_val << std::endl;
    std::cout << "p_val dereferenced ; " << *p_val << std::endl;

    //writing through reference
    ref_val = 500;

    std::cout << "val ; " << val << std::endl;
    std::cout << "ref_val ; " << ref_val << std::endl;
    std::cout << "p_val ; " << p_val << std::endl;
    std::cout << "p_val dereferenced ; " << *p_val << std::endl;


    return 0;
}
