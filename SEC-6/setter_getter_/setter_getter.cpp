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

        //setter
        void set_radius(double param){
            base_radius = param;
        }

        void set_height(double param){
            height = param;
        }

        //getter
        double get_radius(){
            return base_radius;
        }

        double get_height(){
            return height;
        }
};

int main(){

    Cylinder cylinder1;
    cylinder1.set_radius(2);
    cylinder1.set_height(5);

    std::cout << "radius ; " << cylinder1.get_radius() << endl;
    std::cout << "height ; " << cylinder1.get_height() << endl;


    return 0;
}
