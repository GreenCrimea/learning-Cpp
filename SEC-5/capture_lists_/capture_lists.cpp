#include <iostream>
using namespace std;


int main(){

    int a {5};
    int b {10};

    auto func = [a,b]()->int{
        return a + b;
    };

    auto func_2 = [&a, &b]()->int{
        a += 5;
        b += 5;
        return a + b;
    };

    auto func_3 = [=]()->int{
        cout << a + b << "cap all" << endl;
        return 0;
    }();

    cout << func() << endl;
    cout << func_2() << endl;
    cout << func() << endl;

    return 0;
}
