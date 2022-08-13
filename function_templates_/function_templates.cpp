#include <iostream>
using namespace std;

template <typename t> t maximum(t a, t b);

int main(){

    int a {5};
    int b {10};

    double c {5.5};
    double d {10.1};

    string e {"hello"};
    string f {"world"};

    cout << maximum(a,b) << endl;
    cout << maximum(c,d) << endl;
    cout << maximum(e,f) << endl;

    return 0;
}

template <typename t> t maximum(t a, t b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}