#include <iostream>
using namespace std;

const double Pi {3.14159265359};


class Cylinder {

    public:
        double base_radius{};
        double height{};

        double volume(){
            return Pi * base_radius * base_radius *height;
    }
};

int main(){

    Cylinder cylinder1;

    cylinder1.base_radius = 10;
    cylinder1.height = 40;

    cout << "radius ; " << cylinder1.base_radius << endl;
    cout << "height ; " << cylinder1.height << endl;
    cout << "volume ; " << cylinder1.volume() << endl;


    return 0;
}
