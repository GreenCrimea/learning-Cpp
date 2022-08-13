#include <iostream>
using namespace std;

void print_age(int& age);

int main(){

    int age{23};
    print_age(age);

    return 0;
}

void print_age(int& age){
    ++age;
    cout << "age ; " << age << endl;
}