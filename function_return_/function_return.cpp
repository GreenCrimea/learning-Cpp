#include <iostream>
using namespace std;

int sum(int a, int b);

int main(){

    int a {5};
    int b {10};
    int result = sum(a,b);
    cout << "result ; " << result << endl;

    return 0;
}

int sum(int a, int b){
    return a + b;
}
