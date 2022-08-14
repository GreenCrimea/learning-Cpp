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

    Cylinder cylinder1(5,10);

    Cylinder* p_cylinder1 = &cylinder1;

    cout << "volume ; " << (*p_cylinder1).volume() << endl;

    cout << "volume ; " << p_cylinder1->volume() << endl;

    Cylinder* p_cylinder2 = new Cylinder(10,20);

    cout << "volume 2 ; " << p_cylinder2->volume() << endl;

    delete p_cylinder2;


    return 0;
}
