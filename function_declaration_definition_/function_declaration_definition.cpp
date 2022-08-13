#include <iostream>

int max(int a, int b);


int main(){

    int x {5};
    int y {10};

    int result = max(x, y);
    std::cout << "max of " << x << " and " << y << " is ; " << result << std::endl;

    return 0;
}


int max(int a, int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}