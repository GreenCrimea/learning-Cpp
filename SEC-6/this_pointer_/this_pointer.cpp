#include <iostream>
using namespace std;

class Dog{
    public:
        Dog() = default;
        Dog(string_view name_param, string_view breed_param, int p_age_param);
        ~Dog();

        //setters
        Dog* set_name(string_view name){
            this->name = name;
            return this;
        }
        Dog* set_age(int age){
            *(this->p_age) = age;
            return this;
        }
        Dog* set_breed(string_view breed){
            this->breed = breed;
            return this;
        }

        //getters
        void print_info(){
            cout << "name ; " << name << endl;
            cout << "breed ; " << breed << endl;
            cout << "age ; " << *p_age << endl;
        }

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
    cout << "constructor called for " << name << " at " << this << endl;
}

Dog::~Dog(){
    delete p_age;
    cout << "destructor called for " << name << " at " << this << endl;
}



int main(){

    Dog dog1("jack", "terrier", 2);
    dog1.print_info();

    dog1.set_name("rob");
    dog1.set_age(5);
    dog1.set_breed("greyhound");
    dog1.print_info();

    dog1.set_name("mike")->set_breed("wolf")->set_age(7);
    dog1.print_info();

    return 0;
}
