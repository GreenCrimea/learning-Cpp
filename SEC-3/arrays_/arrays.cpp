#include <iostream>

int main(){
    
    //declare array
    int array [10];

    //read data
    std::cout << "array[0] ; " << array[0] << std::endl;

    //read with loop
    for(size_t i; i < 10; ++i){
        std::cout << "array[" << i << "] ; " << array[i] << std::endl;
    }

    //write to array
    array[0] = 50;

    //write with loop
    for(size_t i; i < 10; ++i){
        array[i] = i*10;
    }
    for(size_t i; i < 10; ++i){
        std::cout << "array[" << i << "] ; " << array[i] << std::endl;
    }

    //declare and initalise
    int array2 [5]{1,1,1,1,1};

    //print array2
    for(size_t i; i < 5; ++i){
        std::cout << "array2[" << i << "] ; " << array2[i] << std::endl;
    }

    return 0;
}
