#include <iostream>
#include <iomanip>

int main(){

    float number1 {1.11111f};  //7 points of precision
    double number2 {2.222222222222223};  //15 points of precision
    long double number3 {3.33333333333333333444L};  //15+ points of precision    

    //print sizes
    std::cout << "size of float" << sizeof(float) << std::endl;
    std::cout << "size of double" << sizeof(double) << std::endl;
    std::cout << "size of long double" << sizeof(long double) << std::endl;

    //edit precision
    std::cout << std::setprecision(20);
    std::cout << "number1 is : " << number1  << std::endl;
    std::cout << "number2 is : " << number2  << std::endl;
    std::cout << "number3 is : " << number3  << std::endl;

    double number4 {4.44e10};  //can use scientific notation
    double number5 {5.55e-10};

    std::cout << "number4 is : " << number4 << std::endl;
    std::cout << "number5 is : " << number5 << std::endl;

    double number6 {6.6};
    double number7 {};
    double number8 {};

    double result {number6 / number7};  //infinity

    std::cout << number6 << " / " << number7 << " yields " << result << std::endl;

    double result2 {number7 / number8};  //NaN

    std::cout << number7 << " / " << number8 << " yields " << result2 << std::endl;

    return 0;
}
