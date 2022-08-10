#include <iostream>

int main(){

    const char* message {"hello world"};

    std::cout << "message : " << message << std::endl;


    char message1[] {"hello world"};
    message1[0] = 'b';
    std::cout << "message1 ; " << message1 << std::endl;

    return 0;
}
