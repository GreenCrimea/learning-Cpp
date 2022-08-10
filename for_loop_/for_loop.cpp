#include <iostream>

int main(){

    const size_t count {10};

    for(size_t i; i < count; ++i){
        std::cout << "PRINTED" << std::endl;
    }

    return 0;
}
