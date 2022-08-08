#include <iostream>
#include <ios>
#include <iomanip>

int main(){

    std::cout << "hello ";
    std::cout << "world";

    std::cout << std::endl;

    std::cout << "____________" << std::endl;

    std::cout << "hello\nworld\n";  // \n works the same as std::endl

    std::cout << "Random Message" << std::endl << std::flush;  //sends to terminal immediately

    std::cout << std::setw(10) << "names" << std::setw(15) << "last names" << std:: setw(5) << "job" << std::endl;  //set width for
    std::cout << std::setw(10) << "names" << std::setw(15) << "last names" << std:: setw(5) << "job" << std::endl; 
    std::cout << std::setw(10) << "names" << std::setw(15) << "last names" << std:: setw(5) << "job" << std::endl; 
    std::cout << std::setw(10) << "names" << std::setw(15) << "last names" << std:: setw(5) << "job" << std::endl;  //justified to right by default
    std::cout << std::setw(10) << "names" << std::setw(15) << "last names" << std:: setw(5) << "job" << std::endl; 
    std::cout << std::setw(10) << "names" << std::setw(15) << "last names" << std:: setw(5) << "job" << std::endl; 
    std::cout << std::setw(10) << "names" << std::setw(15) << "last names" << std:: setw(5) << "job" << std::endl; 
    std::cout << std::setw(10) << "names" << std::setw(15) << "last names" << std:: setw(5) << "job" << std::endl; 
    std::cout << std::setw(10) << "names" << std::setw(15) << "last names" << std:: setw(5) << "job" << std::endl; 
    std::cout << std::setw(10) << "names" << std::setw(15) << "last names" << std:: setw(5) << "job" << std::endl;

    std::cout << "__________________________" << std::endl;

    std::cout << std::left;  //justify to left
    std::cout << std::setfill('-');
    std::cout << std::setw(10) << "names" << std::setw(15) << "last names" << std:: setw(5) << "job" << std::endl;  //set width for
    std::cout << std::setw(10) << "names" << std::setw(15) << "last names" << std:: setw(5) << "job" << std::endl; 
    std::cout << std::setw(10) << "names" << std::setw(15) << "last names" << std:: setw(5) << "job" << std::endl; 
    std::cout << std::setw(10) << "names" << std::setw(15) << "last names" << std:: setw(5) << "job" << std::endl; 
    std::cout << std::setw(10) << "names" << std::setw(15) << "last names" << std:: setw(5) << "job" << std::endl; 
    std::cout << std::setw(10) << "names" << std::setw(15) << "last names" << std:: setw(5) << "job" << std::endl; 
    std::cout << std::setw(10) << "names" << std::setw(15) << "last names" << std:: setw(5) << "job" << std::endl; 
    std::cout << std::setw(10) << "names" << std::setw(15) << "last names" << std:: setw(5) << "job" << std::endl; 
    std::cout << std::setw(10) << "names" << std::setw(15) << "last names" << std:: setw(5) << "job" << std::endl; 
    std::cout << std::setw(10) << "names" << std::setw(15) << "last names" << std:: setw(5) << "job" << std::endl;

    int pos_num {50};
    int neg_num {-50};

    std::cout << "pos : " << pos_num << std::endl;
    std::cout << "neg : " << neg_num << std::endl;

    std::cout << std::showpos;  //show + for positive
    std::cout << "pos : " << pos_num << std::endl;
    std::cout << "neg : " << neg_num << std::endl;

    pos_num = 57498;


    std::cout << "int (dec) ; " << std::dec << pos_num << std::endl;
    std::cout << "int (hex) ; " << std::hex << pos_num << std::endl;
    std::cout << "int (oct) ; " << std::oct << pos_num << std::endl;

    std::cout << std::uppercase;
    std::cout << "int (dec) ; " << std::dec << pos_num << std::endl;
    std::cout << "int (hex) ; " << std::hex << pos_num << std::endl;
    std::cout << "int (oct) ; " << std::oct << pos_num << std::endl;


    return 0;
}
