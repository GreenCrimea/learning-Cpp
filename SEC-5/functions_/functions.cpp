#include <iostream>


void enter_bar(unsigned int age){

    if(age > 18){
        std::cout << "enter the bar" << std::endl;
    }else{
        std::cout << "sorry, too young" << std::endl;
    }
}


int max(int a, int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}


void say_hello(){
    std::cout << "hello" << std::endl;
}


double increment_multiply(double a, double b){
    std::cout << "a ; " << a << ", b ; " << b << std::endl;

    double result = ((++a) * (++b));

    std::cout << "now, a ; " << a << ", b ; " << b << std::endl;
    return result;

}


int main(){

    enter_bar(20);

    int result = max(10, 20);
    std::cout << "max is ; " << result << std::endl;

    say_hello();

    int result2 = increment_multiply(5, 10);
    std::cout << "result 2 ; " << result2 << std::endl;

    return 0;
}
