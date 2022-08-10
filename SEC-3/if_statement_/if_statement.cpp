#include <iostream>

int main(){

    int num1 {55};
    int num2 {60};

    bool result = (num1 < num2);

    if(result == true){
        std::cout << num1 << " is less than " << num2 << std::endl;
    }

    if(!(result == true)){
        std::cout << num1 << " is not less than " << num2 << std::endl;
    }

    
    if(result == true){
        std::cout << num1 << " is less than " << num2 << std::endl;
    }else{
        std::cout << num1 << " is not less than " << num2 << std::endl;
    }


    bool red {false};
    bool yellow {false};
    bool green {true};
    bool police_stop {true};

    if(red){
        std::cout << "STOP" << std::endl;
    }
    if(yellow){
        std::cout << "SLOW DOWN" << std::endl;
    }
    if(green){
        std::cout << "GO" << std::endl;
    }


    if(green){
        if(police_stop){
            std::cout << "STOP" << std::endl;
        }else{
            std::cout << "GO" << std::endl;
        }
    }



    return 0;
}
