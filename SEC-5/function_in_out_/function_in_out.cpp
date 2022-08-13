#include <iostream>
using namespace std;

void max_size(int a, int b, int& output);
void min_size(int a, int b, int* output);

int main(){

    int a {5};
    int b {10};
    int output_a {0};
    int output_b {0};

    max_size(a, b, output_a);
    min_size(a, b, &output_b);

    cout << "output_a ; " << output_a << endl;  
    cout << "output_b ; " << output_b << endl; 

    return 0;
}

void max_size(int a, int b, int& output){
    if(a>b){
        output = a;
    }else{
        output = b;
    }
}

void min_size(int a, int b, int* output){
    if (a<b){
        *output = a;
    }else{
        *output = b;
    }
}
