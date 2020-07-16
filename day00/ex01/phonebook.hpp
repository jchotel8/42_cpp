#ifndef DEF_PHONEBOOK
#define DEF_PHONEBOOK

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */

#include <string>
#include <cctype>
#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>

#define PHONEBOOK1 "╦ ╦╔═╗╦  ╔═╗╔═╗╔╦╗╔═╗        ╔═╗╦ ╦╔═╗╔╗╔╔═╗╔╗ ╔═╗╔═╗╦╔═\n"
#define PHONEBOOK2 "║║║║╣ ║  ║  ║ ║║║║║╣  to the ╠═╝╠═╣║ ║║║║║╣ ╠╩╗║ ║║ ║╠╩╗\n"
#define PHONEBOOK3 "╚╩╝╚═╝╩═╝╚═╝╚═╝╩ ╩╚═╝        ╩  ╩ ╩╚═╝╝╚╝╚═╝╚═╝╚═╝╚═╝╩ ╩\n"

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