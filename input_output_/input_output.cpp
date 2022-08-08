#include <iostream>
#include <string>

int main(){
/*
    std::cout << "hello world" << std::endl;  //print data to console

    std::cout << "the number is " << 12 << std::endl;  //print multiple things in same line

    int nextNum {30};
    std::cout << "next number is " << nextNum << std::endl; //print from variable

    std::cerr << "std::cerr output : something went wrong" << std::endl; //print error message

    std::clog << "std::clog output : this is a log message" << std::endl; //print log message
*/

    int num;  //var for age
    std::string name;  //var for name

/*
    std::cout << "please enter your name : " << std::endl; //prompt user for name
    std::cin >> name;  //get user input and assign to name var

    std::cout << "please enter your age : " << std::endl; //prompt user for age
    std::cin >> num;  //get user input and assign to num var
*/

    std::cout << "please enter your name and age" << std::endl; //prompt for both inputs
    //std::cin >> name >> num;

    std::getline(std::cin, name);  //put entire line in string
    std::cin >> num;

    std::cout << "hello " << name << ", you are " << num << " years old" << std::endl;  //print variables with user input

    return 0;
}
