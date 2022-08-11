#include <iostream>

int main(){

    //check if char is alphanumeric
    char str_1 []{"hello 123 &(^$"};

    int num_alphanumeric {0};
    int num_else {0};

    for(int i; i < 14; i++){
        if(std::isalnum ( str_1[i] ) ){
            std::cout << "alnum at [" << i << "]" << std::endl;
            ++num_alphanumeric;
        }else{
            std::cout << "non alnum at [" << i << "]" << std::endl;
            ++num_else;
        }
    }
    
    std::cout << "num of alphanumeric char ; " << num_alphanumeric << std::endl;
    std::cout << "num of non alphanumeric char ; " << num_else << std::endl;


    //check if alphabetic
    char str_2 []{"hello 123 &(^$"};

    int num_alpha {0};
    int num_else_2 {0};

    for(int i; i < 14; i++){
        if(std::isalpha ( str_2[i] ) ){
            std::cout << "alpha at [" << i << "]" << std::endl;
            ++num_alpha;
        }else{
            std::cout << "non alpha at [" << i << "]" << std::endl;
            ++num_else_2;
        }
    }
    
    std::cout << "num of alpha char ; " << num_alpha << std::endl;
    std::cout << "num of non alpha char ; " << num_else_2 << std::endl;


    //check for blank
    char str_3 []{"hello 123 &(^$"};

    int num_blank {0};
    int num_else_3 {0};

    for(int i; i < 14; ++i){
        if(std::isblank ( str_3[i] ) ){
            std::cout << "blank at [" << i << "]" << std::endl;
            ++num_blank;
        }else{
            std::cout << "non blank at [" << i << "]" << std::endl;
            ++num_else_3;
        }
    }
    
    std::cout << "num of blank char ; " << num_blank << std::endl;
    std::cout << "num of non blank char ; " << num_else_3 << std::endl;

    //check upper/lowercase
    char str_4 []{"Hello GOOD day!!!"};

    int num_upper {0};
    int num_lower {0};
    int num_else_4 {0};

    for(auto element : str_4){
        if(std::isupper(element)){
            ++num_upper;
        }else if(std::islower(element)){
            ++num_lower;
        }else{
            ++num_else_4;
        }
    }
    
    std::cout << "num of upper char ; " << num_upper << std::endl;
    std::cout << "num of lower char ; " << num_lower << std::endl;
    std::cout << "num of other char ; " << num_else_4 << std::endl;

    //check for digit
    char str_5 []{"27 people in 27 places"};

    int num_digit {0};
    int num_else_5 {0};

    for(auto element : str_5){
        if(std::isdigit(element)){
            ++num_digit;
        }else{
            ++num_else_5;
        }
    }

    std::cout << "num of digit char ; " << num_digit << std::endl;
    std::cout << "num of other char ; " << num_else_5 << std::endl;

    //turn upper/lower
    char str_6 []{"WhY ArE yoU sO StOOpEd"};

    char upper_str[std::size(str_6)];
    char lower_str[std::size(str_6)];

    for(size_t i; i< std::size(str_6); ++i){
        upper_str[i] = std::toupper(str_6[i]);
        lower_str[i] = std::tolower(str_6[i]);
    }
    
    std::cout << "string ; " << str_6 << std::endl;
    std::cout << "upper string ; " << upper_str << std::endl;
    std::cout << "lower string ; " << lower_str << std::endl;

    return 0;
}
