#ifndef DEF_PHONEBOOK
#define DEF_PHONEBOOK

#include <string>
#include <cctype>
#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>

class Pony
{
    public:

    Pony(void);
    ~Pony(void);
    Pony(std::string name);
    Pony(std::string name, std::string owner, std::string color, std::string fav_food, int speed);
    //GETTERS
    std::string get_name();
    std::string get_owner();
    std::string get_color();
    std::string get_fav_food();
    int get_speed();
    int get_health();
    int get_hunger();
    //SETTERS
    void set_name(std::string name);
    void set_owner(std::string owner);
    void set_color(std::string color);
    void set_fav_food(std::string fav_food);
    void set_speed(int speed);
    //OTHERS
    std::string print();
    std::string print_full();
    void trot();
    void gallop();
    void eat(std::string food);
    void byte(std::string human);
    void sleep();

    private:
    std::string _name;
    std::string _owner;
    std::string _color;
    std::string _fav_food;
    int _speed;
    int _health;
    int _hunger;
};

#endif