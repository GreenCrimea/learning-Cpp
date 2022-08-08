#include <iostream>

int main(){

    int num_count; //initialise with garbage in memory location

    int num2_count{}; //initialise to zero

    int num3_count {5};  //initialise to 10
    int num4_count = 6;  //initialise to 6

    int sum {num3_count + num4_count}; //initialise with expression

    //int sum2 {noVar + noVar2};  //compile error if undeclared variables used

    //int narrowing_conversion {2.9};  //mixing decimals with whole numbers will produce errors
    int implicit_conversion (2.9); //will evaluate as 2, removing the extra data due to curved not curly brackets 

    std::cout << "size of int: " << sizeof(int) << std::endl;  //return the size in bytes in memory
    std::cout << "size of var: " << sizeof(num2_count) << std::endl;

    return 0;
}
