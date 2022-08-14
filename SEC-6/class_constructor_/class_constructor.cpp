#include <iostream>
using namespace std;

const double Pi {3.14159265359};


class Cylinder {

    private:
        double base_radius{};
        double height{};

    public:
        Cylinder(){
            base_radius = 5;
            height = 15;
        }

        Cylinder(double radius_param, double height_param){
            base_radius = radius_param;
            height = height_param;
        }

        double volume(){
            return Pi * base_radius * base_radius *height;
    }
};

int main(){

    Cylinder cylinder1(6,10);

    cout << "volume ; " << cylinder1.volume() << endl;


    return 0;
}