#include <iostream>

int main(){

    const size_t count {10};

    for(size_t i; i < count; ++i){
        std::cout << "PRINTED" << std::endl;
    }

    //range for loop
    int test [10]{1,2,3,4,5,6,7,8,9,10};

    for(int element : test){
        std::cout << "element " << element << std::endl;
    }

    return 0;
}
