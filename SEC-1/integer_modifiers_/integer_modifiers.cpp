#include <iostream>

int main(){

    int num1 {5};  //integer which is implicitly signed or unsigned 
    unsigned int num2 {5};  //unsigned integer - allows max value
    signed int num3 {5};  //signed integer - allows negative values, half the max value 

    //2 bytes in memory
    short short_val {};
    short int short_int {};
    signed short signed_short {};
    signed short int signed_short_int {};
    unsigned short int unsigned_short_int {};

    //4 bytes in memory
    int int_var {};
    signed signed_var {};
    signed int signed_int {};
    unsigned int unsigned_int {};

    //4 or 8 bytes in memory
    long long_var {};
    long int long_int {};
    signed long signed_long {};
    signed long int signed_long_int {};
    unsigned long int unsigned_long_int {};

    //8 bytes in memory
    long long long_long {};
    long long int long_long_int {};
    signed long long signed_long_long {};
    signed long long int signed_long_long_int {};
    unsigned long long int unsigned_long_long_int {};


    return 0;
}
