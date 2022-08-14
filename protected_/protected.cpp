#include <iostream>
#include <string_view>
using namespace std;


class Person{
    public:
        Person() = default;
        Person(string_view first_name, string_view last_name){
            this->first_name = first_name;
            this->last_name = last_name;
        }

        string get_first_name(){
            return first_name;
        }
        string get_last_name(){
            return last_name;
        }

    protected:
        string first_name{"Joe"};
        string last_name{"Bloe"};
};


class Player : public Person{
    public:
        Player() = default;
        Player(string_view first_name, string_view last_name, string_view game){
            this->first_name = first_name;
            this->last_name = last_name;
            this->game = game;
        }
        string get_game(){
            return game;
        }
        void print_data(){
            cout << "first name ; " << get_first_name() << endl;
            cout << "last name ; " << get_last_name() << endl;
            cout << "game ; " << get_game() << endl;
        }

    private:
        string game{"none"};
};


int main(){


    Player player1("Jack", "Jackson", "Footy");
    player1.print_data();



    return 0;
}
