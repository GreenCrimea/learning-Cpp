#include <iostream>

int main(){

    bool red_light {true};  //bool type stores true or false
    bool green_light {false};

    std::cout << std::boolalpha;  //prints bool as T/F not 1/0

    if(red_light == true){
        std::cout << "STOP" << std::endl;
    }else{
        std::cout << "GO" << std::endl;
    }

    if(green_light){
        std::cout << "green light" << std::endl;
    }else{
        std::cout << "red light" << std::endl;
    }

    return 0;
}
