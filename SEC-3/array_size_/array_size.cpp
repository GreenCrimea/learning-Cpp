#include <iostream>

int main(){
    
    int array[10];

    //using size
    std::cout << "array of size " << std::size(array) << std::endl;

    //using range loop
    int total {0};

    for(int element : array){
        ++total;
    }
    std::cout << "array of size " << total << std::endl;

    return 0;
}
