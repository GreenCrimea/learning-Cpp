#include <iostream>

int main(){
    
    int var1 {20};  //declare and initalise
    std::cout << var1 << std::endl;

    var1 = 30;  //assign new value
    std::cout << var1 << std::endl;



    double var2 {20.5};  //declare and initalise
    std::cout << var2 << std::endl;

    var2 = 30.1;  //assign new value
    std::cout << var2 << std::endl;



    bool var3 {true};  //declare and initalise
    std::cout << std::boolalpha;
    std::cout << var3 << std::endl;

    var1 = false;  //assign new value
    std::cout << var3 << std::endl;

    return 0;
}
