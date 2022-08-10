#include <iostream>

int main(){
    
    int a {20};
    int b {30};

    int max {a > b ? a : b};
    
    std::cout << "max is " << max << std::endl;

    return 0;
}
