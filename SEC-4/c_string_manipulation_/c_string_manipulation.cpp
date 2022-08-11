#include <iostream>
#include <cstring>

int main(){

    //length of a string ignoring null char
    const char data_1 []{"a random string of data"};
    const char* data_2 []{"a random string of data"};

    std::cout << "strlen(data_1) ; " << std::strlen(data_1) << std::endl;
    std::cout << "sizeof(data_1) ; " << sizeof(data_1) << std::endl;
    std::cout << "strlen(data_2) ; " << std::strlen(*data_2) << std::endl;
    std::cout << "sizeof(data_2) ; " << sizeof(data_2) << std::endl;


    //string compare
    const char* str_1{"banant"};
    const char* str_2{"banana"};

    const char str_3[]{"banant"};
    const char str_4[]{"banana"};

    std::cout << "compare (" << str_1 << "," << str_2 << ") ; " << std::strcmp(str_1 , str_2) << std::endl; 
    std::cout << "compare (" << str_3 << "," << str_4 << ") ; " << std::strcmp(str_3 , str_4) << std::endl; 

    //string compare n  nunmber of digits
    std::cout << "compare (" << str_1 << "," << str_2 << ") ; " << std::strncmp(str_1 , str_2, 5) << std::endl; 
    std::cout << "compare (" << str_3 << "," << str_4 << ") ; " << std::strncmp(str_3 , str_4, 5) << std::endl;

    //find char in string
    const char* str_5{"the quick fox brown quickly jumped over the lazy quick dog fox brown dog"};
    char target {'b'};
    const char* result {str_5};

    while ((result = std::strchr(result, target)) != nullptr){
        std::cout << "found " << target << " at location ; " << result << std::endl;
        ++result;
    }

    //find last char in string
    char str_6[]{"/home/user/myfirst.cpp"};
    char* output = std::strrchr(str_6, '/');
    if (output){
        std::cout << output + 1 << std::endl;
    }


    return 0;
}
