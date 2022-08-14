#include <iostream>
using namespace std;

class Dog{
    string m_name; //private by default
};

struct Cat{
    string m_name; //public by default
};

struct Point{
    double x;
    double y;
};


int main(){

    Dog dog1;
    Cat cat1;

    Point point1(5,5);

    cout << "point [ x ; " << point1.x << ", y ; " << point1.y << "]" << endl;

    return 0;
}
