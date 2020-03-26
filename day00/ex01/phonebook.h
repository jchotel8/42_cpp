#ifndef DEF_PHONEBOOK
#define DEF_PHONEBOOK

#include <string>
#include <cctype>
#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>

class Contact
{
    public:

    Contact();
    Contact(std::string data[]);
    void set_data(std::string new_field, int i);
    void create_contact();
    void display_contact();
    void display_search();
    void display_field(std::string field);

    private:
    std::string m_data[11];
    std::string m_field[11] = {"First name",
    "Last name",
    "Nickname",
    "Login",
    "Postal address",
    "E-mail address",
    "Phone number",
    "Birthday date",
    "Favorite meal",
    "Underwear color",
    "Darkest secret"
    };
};

#endif