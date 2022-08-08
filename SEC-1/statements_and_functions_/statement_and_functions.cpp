#include <iostream>

//type at beginning defines return type
int addNumbers(int firstNumber, int secondNumber){ //parameters
    //FUNCTION
    int sum = firstNumber + secondNumber; //statement to add numbers
    return sum;  //return the value of sum
}

int multiplyNumbers(int firstNumber, int secondNumber){  //multiply numbers

    int sum = firstNumber * secondNumber;
    return sum;
}


int main(int argc, char **argv){
    
    int firstNumber = 20;  //statement to define integer values to name
    int secondNumber {6};  

    //int sum = firstNumber + secondNumber; 

    std::cout << "first number: " << firstNumber << std::endl;  //print first number
    std::cout << "second number: " << secondNumber << std::endl;  //print second number
    std::cout << "the addition sum is: " << addNumbers(firstNumber, secondNumber) << std::endl;  //call addNumbers function to add them together 
    std::cout << "the multiplication sum is: " << multiplyNumbers(firstNumber,secondNumber) << std::endl; //call multiplyNumbers function to times them together

    return 0;
}
