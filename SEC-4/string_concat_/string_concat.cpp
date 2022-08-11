#include <iostream>
#include <cstring>

int main(){

    char dest[50] = "hello";
    char src[50] = " world";

    std::strcat(dest, src);
    std::cout << std::strcat(dest, ", goodbye world") << std::endl;


    char dest2[50] = "hello";
    char src2[50] = " world of ruin";

    std::strncat(dest2, src2, 6);
    std::cout << dest2 << std::endl;


    const char* src3 = "hello";
    char* dest3 = new char[std::strlen(src3) + 1];

    std::strcpy(dest3, src3);
    std::cout << "dest3 ; " << dest3 << ", src3 ; " << src3 << std::endl;


    int n {4};
    char* dest4 = new char[n];

    std::strncpy(dest4, src3, n);
    std::cout << "dest4 ; " << dest4 << ", src3 ; " << src3 << ", n ; " << n << std::endl;

    return 0;
}
