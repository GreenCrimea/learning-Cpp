#include <iostream>

//tools
const int pen {10};
const int marker {20};
const int eraser {30};
const int rectangle {40};
const int circle {50};
const int ellipse {60};


int main(){

    int tool {eraser};
    switch (tool)
    {
        case pen : {
            std::cout << "current tool is pen" << std::endl;
        }break;
        case marker : {
            std::cout << "current tool is marker" << std::endl;
        }break;
        case eraser : {
            std::cout << "current tool is eraser" << std::endl;
        }break;
        case rectangle : {
            std::cout << "current tool is rectangle" << std::endl;
        }break;
        case circle : {
            std::cout << "current tool is circle" << std::endl;
        }break;
        case ellipse : {
            std::cout << "current tool is ellipse" << std::endl;
        }break;
        default : {
            std::cout << "current tool is undefined" << std::endl;
        }break;
    }


    return 0;
}
