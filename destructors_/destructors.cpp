#include <iostream>
#include <string_view>
using namespace std;

class Dog{
    public:
        Dog() = default;
        Dog(string_view name_param, string_view breed_param, int p_age_param);
        ~Dog();

    private:
        string name;
        string breed;
        int* p_age{nullptr};
};

Dog::Dog(string_view name_param, string_view breed_param, int p_age_param){
    name = name_param;
    breed = breed_param;
    p_age = new int;
    *p_age = p_age_param;
    cout << "constructor called for " << name << endl;
}

Dog::~Dog(){
    delete p_age;
    cout << "destructor called for " << name << endl;
}


void some_func(){
    Dog myDog("fluffy", "terrier", 4);
}


int main(){

    some_func();
    cout << "done" << endl;

    return 0;
}
