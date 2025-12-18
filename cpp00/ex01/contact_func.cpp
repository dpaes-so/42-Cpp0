#include "phonebook.hpp"

void contacts::add_fname(std::string str)
{
    first_name = str;
}
void contacts::add_lname(std::string str)
{
    last_name= str;
}
void contacts::add_nickname(std::string str)
{
    nickname = str;
}
void contacts::add_number(std::string str)
{
    phone_number = str;
}
void contacts::add_secret(std::string str)
{
    darkest_secret = str;
}

void contacts::print_all()
{
    std::cout << first_name << std::endl;
    std::cout << last_name << std::endl;
    std::cout << nickname << std::endl;
    std::cout << phone_number << std::endl;
    std::cout << darkest_secret << std::endl;
}