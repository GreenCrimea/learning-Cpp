#include <iostream>
#include <string>

int main(){

    std::string empty;  //empty string
    std::string data {"text"};  //initialised with text
    std::string data2 {data};  //initialise with other string
    std::string part {"hello world",5};  //contains first 5 characters
    std::string repeat (4,'0');  //contains 4 zeroes
    std::string hello {"hello world"};
    std::string world {hello, 6, 5};  //contains world

    std::cout << empty << std::endl;
    std::cout << data << std::endl;
    std::cout << data2 << std::endl;
    std::cout << part << std::endl;
    std::cout << repeat << std::endl;
    std::cout << hello << std::endl;
    std::cout << world  << std::endl;

    return 0;
}
