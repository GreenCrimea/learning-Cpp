#include <iostream>
#include <cmath>

int main(){

    double weight {7.7};

    //floor
    std::cout << "weight rounded to floor is : " << std::floor(weight) << std::endl;

    //ceiling
    std::cout << "weight rounded to ceiling is : " << std::ceil(weight) << std::endl;


    //absolute value
    double savings {-5000};

    std::cout << "absolute of weight is ; " << std::abs(weight) << std::endl;
    std::cout << "absolute of savings is ; " << std::abs(savings) << std::endl;


    //exp: f(x) = e^x, where e = 2.71828
    double exponential = std::exp(10);
    std::cout << "the exponential of 10 is : " << exponential << std::endl;


    //pow
    std::cout << "3 ^ 4 is : " << std::pow(3,4) << std::endl;
    std::cout << "9 ^ 3 is : " << std::pow(9,3) << std::endl;


    //log: reverse of pow
    std::cout << "log; to get 54.59, youd need to raise e to the power of " <<std::log(54.59) << std::endl;
    std::cout << "log; to get 10000, youd need to raise 10 to the power of " <<std::log10(10000) << std::endl;


    //sqrt
    std::cout << "the sqrt of 81 is : " << std::sqrt(81) << std::endl;


    //round - halfway is rounded up
    std::cout << "3.654 is rounded to : " << std::round(3.654) << std::endl;
    std::cout << "2.5 is rounded to : " << std::round(2.5) << std::endl;
    std::cout << "2.4 is rounded to : " << std::round(2.4) << std::endl;

    return 0;
}
