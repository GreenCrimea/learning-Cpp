#include <iostream>
using namespace std;

int main(){

    [](){
        cout << "hello world" << endl;
    };

    auto func = [](){
        cout << "hello world again" << endl;
    };

    func();

    [](){
        cout << "hello world a 3rd time" << endl;
    }();

    auto func_2 = [](int a, int b)->double{
        return a + b;
    };

    cout << func_2(5,5) << endl;

    return 0;
}
